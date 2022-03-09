#include "interfaceListeSC.h"

void creerListe(listSC *L) {
  L->taille = 0;
  L->premier = NIL;
  L->cle = NIL;
  L->prLibre = 0;
  
  int i;
  
  for (i=0; i<TAILLEMaX-1; i++) {
    L->tab[i].idSuiv = i+1;
  }

  L->tab[i].idSuiv = NIL; 
}

curseur prendreCellule(listSC *L) {
  curseur n = NIL;
  if (L->prLibre != NIL) {
    n = L->prLibre;
    L->prLibre = L->tab[n].idSuiv;
  }
  return n;
}

void insereEnTete(listSC *L, char c) {
  curseur n = prendreCellule(L);
  if (n != NIL) {
    L->taille++;
    L->cle = n;
    L->tab[n].val = c;
    L->tab[n].idSuiv = L->premier;
    L->premier = n;
  }
}

void insereApres(listSC *L, char c) {
  curseur n = prendreCellule(L);
  if (n != NIL) {
    L->taille++;
    L->tab[n].val = c;
    L->tab[n].idSuiv = L->tab[L->cle].idSuiv;
    L->tab[L->cle].idSuiv = n;
  }
}

void suivant(listSC *L) {
  if (L->cle != NIL) {
    L->cle = L->tab[L->cle].idSuiv;
  }
}

void debutList(listSC *L) {
  L->cle = L->premier;
}

int listeVide(listSC *L) {
  if (L->taille == 0) {
    return 1;
  } else {
    return 0;
  }
}

char valeur(listSC *L) {
  if (L->cle != NIL) {
    return L->tab[L->cle].val;
  } else {
    return ' ';
  }
}

curseur getCleListe(listSC *L) {
  return L->cle;
}

void setCleListe(listSC *L, curseur p) {
  L->cle = p;
}

