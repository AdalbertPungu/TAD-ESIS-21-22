#include "tas.h"

//création des tas
void creerTas(TasMin *t, char x) {
  t->taille = 1;
  t->s = 1;
  t->arbre[1]= x;
}

//affiche la valeur
char valeur(TasMin *t) {
  return t->arbre[1];
}

//entasser les tas
void entasser(TasMin *t, char x) {
  t->taille ++;
  t->s ++;
  t->arbre[t->s] = x;
  reorganiserAsc(t);
}

void reorganiserAsc(TasMin *t) {
  
}
