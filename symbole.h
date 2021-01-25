#pragma once

#include <string>
using namespace std;

enum Identificateurs { OPENPAR, CLOSEPAR, PLUS, MULT, INT, FIN, ERREUR };

const string Etiquettes[] = { "OPENPAR", "CLOSEPAR", "PLUS", "MULT", "INT", "FIN", "ERREUR" };

class Symbole {
   public:
      Symbole(int i) : ident(i) {  }
      virtual ~Symbole() { }
      operator int() const { return ident; }
      virtual void Affiche();

   protected:
      int ident;
};

/****************************************************
 * 
 *          Classes des différents symboles
 * 
 * **************************************************/

// CLASSE PARENTHESE OUVRANTE (
class ParOuvrante : public Symbole {
   public:
      ParOuvrante() : Symbole(OPENPAR) { }
      ~ParOuvrante() { }
      virtual void Affiche();
};

// CLASSE PARENTHESE FERMANTE )
class ParFermante : public Symbole {
   public:
      ParFermante() : Symbole(CLOSEPAR) { }
      ~ParFermante() { }
      virtual void Affiche();
};

// CLASSE PLUS +
class Plus : public Symbole {
   public:
      Plus() : Symbole(PLUS) { }
      ~Plus() { }
      virtual void Affiche();
};

// CLASSE MULTIPLICATION *
class Multiplication : public Symbole {
   public:
      Multiplication() : Symbole(MULT) { }
      ~Multiplication() { }
      virtual void Affiche();
};

// CLASSE ENTIER val
class Entier : public Symbole {
   public:
      Entier(int v) : Symbole(INT), valeur(v) { }
      ~Entier() { }
      virtual void Affiche();
   protected:
      int valeur;
};

// CLASSE FIN $
class Fin : public Symbole {
   public:
      Fin() : Symbole(FIN) { }
      ~Fin() { }
      virtual void Affiche();
};

// CLASSE ERREUR E
class Erreur : public Symbole {
   public:
      Erreur() : Symbole(ERREUR) { }
      ~Erreur() { }
      virtual void Affiche();
};