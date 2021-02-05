#pragma once

#include <string>
using namespace std;

enum Identificateurs { OPENPAR, CLOSEPAR, PLUS, MULT, INT, FIN, ERREUR, EXPR };

const string Etiquettes[] = { "OPENPAR", "CLOSEPAR", "PLUS", "MULT", "INT", "FIN", "ERREUR", "EXPR" };

class Symbole {
   public:
      Symbole(int i) : ident(i) {  }
      virtual ~Symbole() { }
      operator int() const { return ident; }
      virtual void Affiche();
      int getValeur();

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
      int getValeur();
};

// CLASSE PARENTHESE FERMANTE )
class ParFermante : public Symbole {
   public:
      ParFermante() : Symbole(CLOSEPAR) { }
      ~ParFermante() { }
      virtual void Affiche();
      int getValeur();
};

// CLASSE PLUS +
class Plus : public Symbole {
   public:
      Plus() : Symbole(PLUS) { }
      ~Plus() { }
      virtual void Affiche();
      int getValeur();
};

// CLASSE MULTIPLICATION *
class Multiplication : public Symbole {
   public:
      Multiplication() : Symbole(MULT) { }
      ~Multiplication() { }
      virtual void Affiche();
      int getValeur();
};

// CLASSE ENTIER val
class Entier : public Symbole {
   public:
      Entier(int v) : Symbole(INT), valeur(v) { }
      ~Entier() { }
      virtual void Affiche();
      int getValeur();

   protected:
      int valeur;
};

// CLASSE FIN $
class Fin : public Symbole {
   public:
      Fin() : Symbole(FIN) { }
      ~Fin() { }
      virtual void Affiche();
      int getValeur();
};

// CLASSE ERREUR E
class Erreur : public Symbole {
   public:
      Erreur() : Symbole(ERREUR) { }
      ~Erreur() { }
      virtual void Affiche();
      int getValeur();
};

// CLASSE EXPRESSION EXPR
class Expression : public Symbole {
public:
  Expression(int val) : Symbole(EXPR), valeur(val) {}
  ~Expression() {}
  virtual void Affiche();
  int getValeur();

protected:
   int valeur;
};
