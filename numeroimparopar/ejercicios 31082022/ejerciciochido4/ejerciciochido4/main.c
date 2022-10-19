#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso , longitud , peso_m , long_m;

    printf("inserte el peso del dinosaurio en libras\n");
    scanf ("%f" , &peso);

    printf ("inserte la longitud del dinosaurio en pies\n");
    scanf ("%f" , &longitud);

    peso_m = peso / 2.205;
    long_m = longitud / 3.281;

    printf ("el peso del dinosaurio en kilos es %f kilos\n" , peso_m);
    printf ("la longitud del dinosaurio en metros es de %f metros \n" , long_m);


    return 0;
}
