#include <stdio.h>

int main()
{
    int numero , resultado1 , result2;

    printf ("inserte el numero entero deseado\n");
    scanf ("%d" , &numero);

    resultado1 = numero * numero;
    result2 = numero * numero * numero;

    printf ("El cuadrado de %d es %d y su cubo es de %d\n" , numero , resultado1 , result2);

    return 0;



}
