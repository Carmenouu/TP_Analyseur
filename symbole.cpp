#include "symbole.h"
#include <iostream>

void Symbole::Affiche() {
   cout<<Etiquettes[ident];
}

int Symbole::getValeur() {
   return -1;
}

/************************************************************
 * 
 *          Méthodes d'affichage des différents symboles
 * 
 * **********************************************************/

void ParOuvrante::Affiche() {
   Symbole::Affiche();
}

void ParFermante::Affiche() {
   Symbole::Affiche();
}

void Plus::Affiche() {
   Symbole::Affiche();
}

void Multiplication::Affiche() {
   Symbole::Affiche();
}

void Entier::Affiche() {
   Symbole::Affiche();
   cout<<"("<<valeur<<")";
}

void Fin::Affiche() {
   Symbole::Affiche();
}

void Erreur::Affiche() {
   Symbole::Affiche();
}

void Expression::Affiche() {
   Symbole::Affiche();
   cout<<"("<<valeur<<")";
}

/************************************************************
 * 
 *          Méthodes "getValeur" des différents symboles
 * 
 * **********************************************************/

int ParOuvrante::getValeur() {
   Symbole::getValeur();
}

int ParFermante::getValeur() {
   Symbole::getValeur();
}

int Plus::getValeur() {
   Symbole::getValeur();
}

int Multiplication::getValeur() {
   Symbole::getValeur();
}

int Entier::getValeur() {
   return valeur;
}

int Fin::getValeur() {
   Symbole::getValeur();
}

int Erreur::getValeur() {
   Symbole::getValeur();
}

int Expression::getValeur() {
   return valeur ;
}
