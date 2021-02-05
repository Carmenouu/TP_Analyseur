#include <iostream>
#include "lexer.h"
#include "automate.h"


int main(void) {
   string chaine;
   bool fini;
   do {
      cout << "Entrez une expression à analyser :" <<endl ;
      cin >> chaine;

      Automate *automate = new Automate(chaine);

      fini = automate->run();
   } while (!fini);
   
   cout << "Bisous !" << endl ;
   return 0;
}

