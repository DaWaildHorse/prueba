#include <stdio.h>

//Programa para dividir dos numeros flotantes
int main ()
{
    float num_1 , num_2 , resultado;


    printf ("porfavor inserte el primer numero\n");
    scanf ("%f" , &num_1);

    printf ("porfavor inserte el segundo numero\n");
    scanf ("%f" , &num_2);

    if (num_2 == 0)      //funcion if para marcar error si el divisor es 0
    {
        printf ("ERROR");
    }

    else
    {
        resultado = num_1 / num_2;
        printf ("El resultado de la division es %f\n" , resultado);
    }

    return 0;
}
