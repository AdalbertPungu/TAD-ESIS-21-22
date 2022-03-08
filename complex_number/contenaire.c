#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include "complex.c"

#define Dim 10

typedef struct complex{
	double r; // real part
	double i; // imag part
} Complex;

typedef struct objet{
	Complex c; 
	bool b; 
} Objet;

Objet tab[Dim];

void createContenaire(Objet tab[], int n){
    for (int i= 0;i<n;i++){
        tab[i].b = false;
    }
}

void ajoutContenaire(Objet tab[], int n, Complex c ){
    for (int i = 0; i<n;i++){
        if(tab[i].b == false){
            tab[i].c = c;
            tab[i].b == true;
            break;
        }
    }
}



void detruireContenaire(Objet tab[], int n){
    for (int i= 0;i<n;i++){
        tab[i].b = false;
    }
}

