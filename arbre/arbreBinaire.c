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

void ajouterFilsGauche(sommet s, objet o) {
  sommet ab = (sommet) malloc(sizeof (struct sommet));
  ab->pere = s;
  ab->info = o;
  s->gauche = ab;
}

void ajouterFilsDroit(sommet s, objet o) {
  
}