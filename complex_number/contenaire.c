#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include "contenaire.h"

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

void supprimerContenaire(Objet tab[], int n , Complex  ob){
    for (int i = 0; i<n;i++) {        
        if (C_compare(tab[i].c, ob)){
            tab[i].b = false;
            break;
        }
    }
}

void detruireContenaire(Objet tab[], int n){
    for (int i= 0;i<n;i++){
        tab[i].b = false;
    }
}

Complex  valeurContenaire(Objet tab[], int n ){
    for (int i = 0; i<n;i++){
        if(tab[i].b){
            return tab[i].c;
        }
    }
    Complex c;
    return c;
}

void printContenaire(Objet tab[], int n ){
    for (int i = 0; i<n; i++){
        if (tab[i].b == true){
            C_print(tab[i].c);
        }
    }
}

