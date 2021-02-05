#include "etat.h"
#include <iostream>

Automate::Automate(string chaine) {
    this->lexer = new Lexer(chaine);
    Etat0 *depart = new Etat0();
    pileEtats.push(depart);
}

bool Automate::run() {
    bool etatSuivant = true;

    while (etatSuivant) {
        Symbole *s = lexer->Consulter();
        lexer->Avancer();
        etatSuivant = pileEtats.top()->Transition(*this, s);
    }
    if (*pileSymboles.top() != ERREUR) {

        int resultat = pileSymboles.top()->getValeur();
        cout << "Résultat de l'expression : " << resultat << endl;
        return true ;
    } else {
        cerr << "ERREUR : l'expression entrée est invalide." << endl << "Veuillez recommencer." << endl << endl ;
        return false ;
  }
}

void Automate::decalage(Symbole *s, Etat *e) {
    pileSymboles.push(s);
    pileEtats.push(e);
}

void Automate::reduction(int n, Symbole *s) {
    stack<Symbole *> aEnlever;

    for (int i = 0; i < n; i++) {
        delete (pileEtats.top());
        pileEtats.pop();
        aEnlever.push(pileSymboles.top());
        pileSymboles.pop();
    }

    int val;

    if (n == 1) {
        val = aEnlever.top()->getValeur();
    } else if (n == 3) {
        if (*aEnlever.top() == OPENPAR) {
            aEnlever.pop();
            val = aEnlever.top()->getValeur();
        } else {
            val = aEnlever.top()->getValeur();
            aEnlever.pop();
            if (*aEnlever.top() == MULT) {
                aEnlever.pop();
                val = val * aEnlever.top()->getValeur();
            } else {
                aEnlever.pop();
                val = val + aEnlever.top()->getValeur();
            }
        }
    }

    pileEtats.top()->Transition(*this, new Expression(val));
    lexer->ajoutTampon(s);
}