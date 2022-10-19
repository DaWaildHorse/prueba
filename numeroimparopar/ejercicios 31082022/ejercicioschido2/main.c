#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x1 , x2 , y1 , y2 , dif_x , dif_y; //sexo
    float coord , dist , result_x , result_y;

    printf ("inserta las coordenadas del primer punto\n");
    scanf ("%f" "%f" , &x1 , &y1);

    printf ("inserta las coordenadas del segundo punto\n");
    scanf ("%f" "%f" , &x2 , &y2);

    dif_x = x1 - x2;
    dif_y = y1 - y2;

    result_x = dif_x * dif_x ;
    result_y = dif_y * dif_y ;

    coord = result_x + result_y ;

    dist = sqrt(coord);

    printf ("La distancia euclidiana del punto (%f , %f) y (%f , %f) es de %f" , x1 , y1 , x2 , y2 , dist);

    return 0;
}
