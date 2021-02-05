#pragma once

#include <string>
#include "automate.h"
using namespace std;

class Etat1;
class Etat2;
class Etat3;
class Etat4;
class Etat5;
class Etat6;
class Etat7;
class Etat8;
class Etat9;

class Etat {
   public:
      Etat() ;
      Etat(string nom) ;
      virtual ~Etat() ;
      virtual bool Transition(Automate &automate, Symbole *symboleTransition) = 0;
   
   protected:
      string nomEtat;
};

/****************************************************
 * 
 *          Classes des différents états
 * 
 * **************************************************/
class Etat0 : public Etat {
   public:
      Etat0() : Etat("IO") { }
      ~Etat0() { }

      bool Transition(Automate &automate, Symbole *symboleTransition) ;
};
class Etat1 : public Etat {
   public:
      Etat1() : Etat("I1") { }
      ~Etat1() { }

      bool Transition(Automate &automate, Symbole *symboleTransition) ;
};
class Etat2 : public Etat {
   public:
      Etat2() : Etat("I2") { }
      ~Etat2() { }

      bool Transition(Automate &automate, Symbole *symboleTransition) ;
};
class Etat3 : public Etat {
   public:
      Etat3() : Etat("I3") { }
      ~Etat3() { }

      bool Transition(Automate &automate, Symbole *symboleTransition) ;
};
class Etat4 : public Etat {
   public:
      Etat4() : Etat("I4") { }
      ~Etat4() { }

      bool Transition(Automate &automate, Symbole *symboleTransition) ;
};
class Etat5 : public Etat {
   public:
      Etat5() : Etat("I5") { }
      ~Etat5() { }

      bool Transition(Automate &automate, Symbole *symboleTransition) ;
};
class Etat6 : public Etat {
   public:
      Etat6() : Etat("I6") { }
      ~Etat6() { }

      bool Transition(Automate &automate, Symbole *symboleTransition) ;
};
class Etat7 : public Etat {
   public:
      Etat7() : Etat("I7") { }
      ~Etat7() { }

      bool Transition(Automate &automate, Symbole *symboleTransition) ;
};
class Etat8 : public Etat {
   public:
      Etat8() : Etat("I8") { }
      ~Etat8() { }

      bool Transition(Automate &automate, Symbole *symboleTransition) ;
};
class Etat9 : public Etat {
   public:
      Etat9() : Etat("I9") { }
      ~Etat9() { }

      bool Transition(Automate &automate, Symbole *symboleTransition) ;
};