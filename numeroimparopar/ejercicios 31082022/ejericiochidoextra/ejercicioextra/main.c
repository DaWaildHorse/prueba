#include <stdio.h>

/**Programa en C que lea n números enteros (el usuario ingresará el valor de n) y determine cuál es el mayor y cuál es el menor de esa secuencia.

Ejemplo: Supón que el usuario ingresó n = 5 y la secuencia  1  4  50  -1  10, el menor es -1 y el mayor es 50.*/



int main()
#define NUMERO 666
{
/**double miVariable = 666;
	int tamanio = sizeof(miVariable);
	printf("La variable de tipo double ocupa %d bytes\n", tamanio);*/


    int i , j , x[NUMERO] , suma = 0 , temp,a,p;


    printf ("inserte la cantidad de numeros que quiere escribir\n");
    scanf ("%d" , &p);

    for (i=0; 1 < p; i++)
    {
        scanf("%d\n" , &a);
        x[NUMERO] = a;
    }

    for (i=0;i < NUMERO - 1 ; i++)
    {
        for (j = NUMERO - 1 ; i < j; j--)
        {
            if (x[j-1] < x[j])
            {
                temp = x[j-1];
                x[j-1] = x[j];
                x[j] = temp;
            }
        }
    }

    printf ("los numeros ordenados son:\n");
    for (i=0; i<x; i++)
    {
        printf ("num[%d] =\n" , i, x[NUMERO]);
    }



    return 0;

}
