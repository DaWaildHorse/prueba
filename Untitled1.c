#include <stdio.h>

int main ()

{
    float calif;

    printf ("inserta la calificacion obtenida");
    scanf ("%f" , calif);

    if (calif <= 6)
    {
        printf ("No aprobaste");
    }
    else
    {
        printf ("Felicidades, aprobaste");
    }
    return 0;
}
