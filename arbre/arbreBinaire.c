#include "arbreBinaire.h"

sommet creerArbreBinaire(objet racine) {
  
  sommet ab = (sommet) malloc(sizeof (struct sommet));
  
  if (ab != NULL) { 
    ab->info = racine;
    ab->gauche = NULL;
    ab->droit = NULL;
    ab->pere= NULL;
    
    return ab;
  }

  return NULL;
}

