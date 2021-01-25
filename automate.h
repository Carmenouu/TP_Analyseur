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
    
    protected:
        stack<Symbole *> pileSymboles ;
        stack<Etat *> pileEtats ;
        Lexer * lexer ;

};