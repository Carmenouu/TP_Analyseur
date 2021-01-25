#include "symbole.h"
#include <iostream>

void Symbole::Affiche() {
   cout<<Etiquettes[ident];
}

/************************************************************
 * 
 *          Méthodes d'affichage des différents symboles
 * 
 * **********************************************************/

void ParOuvrante::Affiche() {
   Symbole::Affiche();
   cout<<"(";
}

void ParFermante::Affiche() {
   Symbole::Affiche();
   cout<<")";
}

void Plus::Affiche() {
   Symbole::Affiche();
   cout<<"+";
}

void Multiplication::Affiche() {
   Symbole::Affiche();
   cout<<"*";
}

void Entier::Affiche() {
   Symbole::Affiche();
   cout<<"("<<valeur<<")";
}

void Fin::Affiche() {
   Symbole::Affiche();
   cout<<"$";
}

void Erreur::Affiche() {
   Symbole::Affiche();
   cout<<"ERROR";
}