#ifndef __MY_MATH_LIB_H
#define __MY_MATH_LIB_H

// Définition d'une fonction de calcul de factorielle.
unsigned int fact( unsigned int value );
// Définition d'une fonction d'élévation à une puissance données.
int power( int value, unsigned int pow );
//Définition d'une fonction de permutation de deux nombres
void permutation(int*a, int*b);
//ordre dun entier positif
void premier(int n);
//equation
void resolution(double a, double b, double c);
// Définition d'une structure point qui calcule leur distance
typedef struct{
    float abscisse;
    float ordonnee;
} point;
float distance(point x, point y);
#endif