#include <stdio.h>
#include <math.h>
int main ()
{
    int calif[20];
    int cont1=0,cont2=0,cont3=0,cont4=0,cont5=0;

    for (int i=0; i<20; i++)
    {
        printf ("porfavor inserte una calificacion del 1 al 5\n");
        scanf ("%d", &calif[i]);
        if (calif[i] ==1)
        {
            cont1++;
        }
        if (calif[i]==2)
        {
            cont2++;
        }
        if (calif[i]==3)
        {
            cont3++;
        }
        if (calif[i]==4)
        {
            cont4++;
        }
        if (calif[i]==5)
        {
            cont5++;
        }
    }

    printf  ("Calificacion               Repeticion\n");
    printf  ("  1\t\t\t");

    for (int i=0; i<cont1;i++)
    {
        printf ("*");
    }
    printf ("\n");
    printf  ("  2\t\t\t");

    for (int i=0; i<cont2;i++)
    {
        printf ("*");
    }
    printf ("\n");
    printf  ("  3\t\t\t");

    for (int i=0; i<cont3;i++)
    {
        printf ("*");
    }
    printf ("\n");
    printf  ("  4\t\t\t");

    for (int i=0; i<cont4;i++)
    {
        printf ("*");
    }
    printf ("\n");
    printf  ("  5\t\t\t");

    for (int i=0; i<cont5;i++)
    {
        printf ("*");
    }
    printf ("\n");
    return 0;
}
