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