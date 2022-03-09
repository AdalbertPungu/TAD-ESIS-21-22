#include "interfacePile.h"

void creerPile(pile p) {
  p->sommet = NIL;
  p->taille = 0;
  curseur i;
  for (i=0; i<TAILLEMax; i++) {
    p->tab[i].prec = i-1;
  }
}

int pilePleine(pile p) {
  return (p->taille == TAILLEMax);
}

int pileVide(pile p) {
  return (p->taille == 0);
}

void empiler(pile p, char val) {
  
}