#pragma once

#include <string>
#include <stack>
#include "symbole.h"
#include "lexer.h"

using namespace std;

class Etat ;

class Automate {
    public:
        Automate(){ }
        ~Automate() { }
        Automate(string chaine) ;

// Méthodes :
        void run() ;
        void decalage(Symbole *s, Etat *e) ;
        void reduction(int n, Symbole *s) ;
    
    protected:
        stack<Symbole *> pileSymboles ;
        stack<Etat *> pileEtats ;
        Lexer * lexer ;

};