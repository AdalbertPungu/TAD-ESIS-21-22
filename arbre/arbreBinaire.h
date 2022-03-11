#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct sommet *sommet;
typedef sommet arbreBinaire;
typedef char objet;

struct sommet
{
  objet info;
  sommet gauche, droit, pere;
};

sommet creerArbreBinaire(objet racine);
void detruireSommet(sommet s);
void* getValeur(sommet s);
void setValeur(sommet s, objet o);
sommet filsGauche(sommet S);
sommet filsDroit(sommet S);
sommet pere(sommet S);
void ajouterFilsGauche(sommet s, objet o);
void ajouterFilsDroit(sommet s, objet o);
void supprimerFilsGauche(sommet s);
void supprimerFilsDroit(sommet s);
void detruitSommet(sommet *n);

//Nouvelles Primitives
void setFilsGauche(sommet s, sommet fg);
void setFilsDroit(sommet s, sommet fd);
void setPere(sommet s,sommet p);

