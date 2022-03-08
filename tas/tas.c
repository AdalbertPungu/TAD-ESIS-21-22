#include "tas.h"

void creerTas(TasMin *t, char x) {
  t->taille = 1;
  t->s = 1;
  t->arbre[1]= x;
}

//affiche la valeur
char valeur(TasMin *t) {
  return t->arbre[1];
}