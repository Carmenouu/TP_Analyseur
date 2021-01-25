#pragma once

#include <string>
#include "automate.h"
using namespace std;

class Etat {
   public:
      Etat() {  }
      virtual ~Etat() { }
      virtual void Transition(Automate automate);
};

/****************************************************
 * 
 *          Classes des différents états
 * 
 * **************************************************/
class Etat0 : public Etat {
   public:
      Etat0() : Etat() { }
      ~Etat0() { }
};
class Etat1 : public Etat {
   public:
      Etat1() : Etat() { }
      ~Etat1() { }
};
class Etat2 : public Etat {
   public:
      Etat2() : Etat() { }
      ~Etat2() { }
};
class Etat3 : public Etat {
   public:
      Etat3() : Etat() { }
      ~Etat3() { }
};
class Etat4 : public Etat {
   public:
      Etat4() : Etat() { }
      ~Etat4() { }
};
class Etat5 : public Etat {
   public:
      Etat5() : Etat() { }
      ~Etat5() { }
};
class Etat6 : public Etat {
   public:
      Etat6() : Etat() { }
      ~Etat6() { }
};
class Etat7 : public Etat {
   public:
      Etat7() : Etat() { }
      ~Etat7() { }
};
class Etat8 : public Etat {
   public:
      Etat8() : Etat() { }
      ~Etat8() { }
};
class Etat9 : public Etat {
   public:
      Etat9() : Etat() { }
      ~Etat9() { }
};