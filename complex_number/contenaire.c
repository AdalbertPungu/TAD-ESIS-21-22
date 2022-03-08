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