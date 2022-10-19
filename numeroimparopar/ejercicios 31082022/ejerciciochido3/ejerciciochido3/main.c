#include <stdio.h>
#include <stdlib.h>

int main()
{
    float calif;

    printf ("inserta la calificacion obtenida\n");
    scanf ("%f" , &calif);

    if (calif < 60)
        {
            printf ("su calificacion es de F");
        }
    else
    {
        if ( 60 <= calif && calif < 70)
        {
            printf ("su calificacion es de D");
        }
        else
        {
            if (70 <= calif && calif < 80)
            {
                printf ("su calificacion es de C");
            }
            else
            {
                if (80 <= calif && calif < 90)
                {
                    printf ("su calificacion es de B");
                }
                else
                {
                    if (calif > 90)
                    {
                     printf ("su calificacion es de A");
                    }
                }
            }
        }
    }

}
