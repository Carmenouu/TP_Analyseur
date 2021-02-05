#include "etat.h"
#include <iostream>
using namespace std;


Etat::Etat() {}
Etat::~Etat() {}
Etat::Etat(string nom) { 
    nomEtat = nom; 
}


bool Etat0::Transition(Automate &automate, Symbole *symboleTransition) {
    switch (*symboleTransition) {
    case EXPR:
        automate.decalage(symboleTransition, new Etat1);
        break;
    
    case INT:
        automate.decalage(symboleTransition, new Etat3);
        break;

    case OPENPAR:
        automate.decalage(symboleTransition, new Etat2);
        break;

    default:
        automate.decalage(new Erreur, NULL);
        return false;
    }
    return true;
}

bool Etat1::Transition(Automate &automate, Symbole *symboleTransition) {

    switch (*symboleTransition) {
    case PLUS:
        automate.decalage(symboleTransition, new Etat4);
        break;

    case MULT:
        automate.decalage(symboleTransition, new Etat5);
        break;

    case FIN:
        return false;
        break;

    default:
        automate.decalage(new Symbole(ERREUR), NULL);
        return false;
    }

    return true;
}

bool Etat2::Transition(Automate &automate, Symbole *symboleTransition) {

    switch (*symboleTransition) {
    case INT:
        automate.decalage(symboleTransition, new Etat3);
        break;

    case OPENPAR:
        automate.decalage(symboleTransition, new Etat2);
        break;

    case EXPR:
        automate.decalage(symboleTransition, new Etat6);
        break;

    default:
        automate.decalage(new Symbole(ERREUR), NULL);
        return false;
    }

    return true;
}

bool Etat3::Transition(Automate &automate, Symbole *symboleTransition) {

    switch (*symboleTransition) {
    case PLUS:
        automate.reduction(1, new Plus);
        break;

    case MULT:
        automate.reduction(1, new Multiplication);
        break;

    case CLOSEPAR:
        automate.reduction(1, new ParFermante);
        break;

    case FIN:
        automate.reduction(1, new Fin);
        break;

    default:
        automate.decalage(new Symbole(ERREUR), NULL);
        return false;
    }

    return true;
}

bool Etat4::Transition(Automate &automate, Symbole *symboleTransition) {

    switch (*symboleTransition) {
    case INT:
        automate.decalage(symboleTransition, new Etat3);
        break;

    case OPENPAR:
        automate.decalage(symboleTransition, new Etat2);
        break;

    case EXPR:
        automate.decalage(symboleTransition, new Etat7);
        break;

    default:
        automate.decalage(new Symbole(ERREUR), NULL);
        return false;
    }

    return true;
}

bool Etat5::Transition(Automate &automate, Symbole *symboleTransition) {

    switch (*symboleTransition) {
    case INT:
        automate.decalage(symboleTransition, new Etat3);
        break;

    case OPENPAR:
        automate.decalage(symboleTransition, new Etat2);
        break;

    case EXPR:
        automate.decalage(symboleTransition, new Etat8);
        break;

    default:
        automate.decalage(new Symbole(ERREUR), NULL);
        return false;
    }

    return true;
}

bool Etat6::Transition(Automate &automate, Symbole *symboleTransition) {

    switch (*symboleTransition) {
    case PLUS:
        automate.decalage(symboleTransition, new Etat4);
        break;

    case MULT:
        automate.decalage(symboleTransition, new Etat5);
        break;

    case CLOSEPAR:
        automate.decalage(symboleTransition, new Etat9);
        break;

    default:
        automate.decalage(new Symbole(ERREUR), NULL);
        return false;
    }

    return true;
}

bool Etat7::Transition(Automate &automate, Symbole *symboleTransition) {

    switch (*symboleTransition) {
    case PLUS:
        automate.reduction(3, new Plus);
        break;

    case MULT:
        automate.decalage(symboleTransition, new Etat5);
        break;

    case CLOSEPAR:
        automate.reduction(3, new ParFermante);
        break;

    case FIN:
        automate.reduction(3, new Fin);
        break;

    default:
        automate.decalage(new Symbole(ERREUR), NULL);
        return false;
    }

    return true;
}

bool Etat8::Transition(Automate &automate, Symbole *symboleTransition) {

    switch (*symboleTransition) {
    case PLUS:
        automate.reduction(3, new Plus);
        break;

    case MULT:
        automate.reduction(3, new Multiplication);
        break;

    case CLOSEPAR:
        automate.reduction(3, new ParFermante);
        break;

    case FIN:
        automate.reduction(3, new Fin);
        break;

    default:
        automate.decalage(new Symbole(ERREUR), NULL);
        return false;
    }

    return true;
}

bool Etat9::Transition(Automate &automate, Symbole *symboleTransition) {

    switch (*symboleTransition) {
    case PLUS:
        automate.reduction(3, new Plus);
        break;

    case MULT:
        automate.reduction(3, new Multiplication);
        break;

    case CLOSEPAR:
        automate.reduction(3, new ParFermante);
        break;

    case FIN:
        automate.reduction(3, new Fin);
        break;

    default:
        automate.decalage(new Symbole(ERREUR), NULL);
        return false;
    }

    return true;
}