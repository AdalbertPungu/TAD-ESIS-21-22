// Importations

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

// type abstrait  nombre complexe

typedef struct complex{
  float r; // Partie Réelle
  float i; // Partiie Imaginaire
} complex;

// Les primitives

complex C_new (double r, double i);

complex C_add (complex a,  complex b);

complex C_mul (complex a,  complex b);

double  C_module (complex c);

bool C_compare (complex a, complex b);

/* Fonction d'affichage d'un nombre complexe */

void C_print(complex a);


