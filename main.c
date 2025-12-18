#include <stdio.h>
#include <stdlib.h>

#include "Bibliothèque.h"


int main( void ) {
    
    int result = power( 2, 3 );
    printf( "2³ == %d\n", result );
    
    result = fact( 6 );
    printf( "6! == %d\n", result );

    int first=10,second=20;
    printf("first=%d # second=%d\n",first,second);
    permutation(&first,&second);
    printf("first=%d # second=%d ",first,second);

    int n=17;
    premier(n);
   double a=2;
   double b=9;
   double c=4;
   resolution(a,b,c);

   point u;
   point v;
   printf("entrer l\'abscisse du premier point");
   scanf("%f",&u.abscisse);
   printf("entrer l\'ordonnee du premier point");
   scanf("%f",&u.ordonnee);
   printf("entrer l\'abscisse du premier point");
   scanf("%f",&v.abscisse);
   printf("entrer l\'ordonnee du premier point");
   scanf("%f",&v.ordonnee);
   printf("la distance entre les deux points est de:%f",distance(u,v));
    return EXIT_SUCCESS;
}