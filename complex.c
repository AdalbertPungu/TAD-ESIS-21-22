// Importations

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include "complex.h"

// type abstrait  nombre complexe

typedef struct complex{
  float r; // Partie Réelle
  float i; // Partiie Imaginaire
} complex;

// Implémentation des primitives

complex C_new (double r, double i) {
  complex c;
  c.r = r;
  c.i = i;
  return c;
}

complex C_add (complex a,  complex b) {
  complex c;
  c.r = a.r + b.r;
  c.i = a.i + b.i;
  return c;
}

