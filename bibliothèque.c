#include "Bibliothèque.h"
#include<stdio.h>
#include<math.h>

// Définition d'une fonction de calcul de factorielle.
unsigned int fact( unsigned int value ) {
    unsigned int result = 1;
    while ( value > 1 ) {
        result *= value;
        value --;
    }
    return result;
}

// Définition d'une fonction d'élévation à une puissance données.
int power( int value, unsigned int pow ) {
    if ( pow == 0 ) return 1;
    if ( pow == 1 ) return value;
    int accumulator = 1;
    while( pow > 0 ) {
        accumulator *= value;
        pow--;
    }

    return accumulator;
}
//Définition d'une fonction de permutation de deux nombres
void permutation(int *a,int *b){
    int c=*a;
    *a=*b;
    *b=c;
}
//fonction qui permet de dire si un nombre est premier ou pas
void premier(int n) {
    int s = 0;
    for (int i=1; i<=(n/2); i++){
        if(n%i==0){
            s += 1;
        }
    }
    if (s == 1){
        printf("%d est un nombre premier\n", n);
    } 
    else{
        printf("%d n'est pas un nombre premier\n", n);
    }
}
//résolution d'une équation de second dégré
void resolution(double a, double b, double c){
    double y1, y2, y0, delta;
    printf("entrer les coefficients de a,b et c \n");
    scanf("%lf %lf %lf", &a,&b,&c);
    if(a==0){
        printf("l\'equation n'est pas du second degre\n");
    }
    delta=b*b-4*a*c;
    if (delta>0){
        y1=(-b-sqrt(delta))/(2*a);
        y2=(-b+sqrt(delta))/(2*a);
        printf("l\'equation a deux solutions\n");
        printf("y1=%lf\n",y1);
        printf("y2=%lf\n",y2);
    }
    else if (delta==0){
    y0=-b/(2*a);
    printf("l\'equation a une solution double");
    printf("y0=%lf\n",y0);
    }
    else{
        printf("l\'equation n'a pas de solution\n");
    }
}
// Définition d'une fonction qui prend duex points et calcule leur distance
float distance(point x, point y){
    float dist;
    dist = sqrt(power((x.abscisse - y.abscisse),2) + power((x.ordonnee - y.ordonnee),2));
    return dist;
}