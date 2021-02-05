#pragma once

#include <string>
#include "automate.h"
using namespace std;

class Etat {
   public:
      Etat();
      Etat(string nom) : nomEtat(nom) {}
      virtual ~Etat();
      virtual bool Transition(Automate automate, string nom);
   
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
      Etat0() : Etat("EO") { }
      ~Etat0() { }
};
class Etat1 : public Etat {
   public:
      Etat1() : Etat("E1") { }
      ~Etat1() { }
};
class Etat2 : public Etat {
   public:
      Etat2() : Etat("E2") { }
      ~Etat2() { }
};
class Etat3 : public Etat {
   public:
      Etat3() : Etat("E3") { }
      ~Etat3() { }
};
class Etat4 : public Etat {
   public:
      Etat4() : Etat("E4") { }
      ~Etat4() { }
};
class Etat5 : public Etat {
   public:
      Etat5() : Etat("E5") { }
      ~Etat5() { }
};
class Etat6 : public Etat {
   public:
      Etat6() : Etat("E6") { }
      ~Etat6() { }
};
class Etat7 : public Etat {
   public:
      Etat7() : Etat("E7") { }
      ~Etat7() { }
};
class Etat8 : public Etat {
   public:
      Etat8() : Etat("E8") { }
      ~Etat8() { }
};
class Etat9 : public Etat {
   public:
      Etat9() : Etat("E9") { }
      ~Etat9() { }
};