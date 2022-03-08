#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#define Dim 10

typedef struct complex{
	double r; // real part
	double i; // imag part
}Complex;

typedef struct objet{
	Complex c; 
	bool b; 
} Objet;

Objet tab[Dim];

void createContenaire(Objet tab[], int n ); 
void ajoutContenaire(Objet tab[], int n, Complex c );
void supprimerContenaire(Objet tab[], int n , Complex  ob );
void detruireContenaire(Objet tab[], int n );
Complex  valeurContenaire(Objet tab[], int n );
void printContenaire(Objet tab[], int n );
