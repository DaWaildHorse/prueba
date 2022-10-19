#include <stdio.h>
#include <math.h>

int main(){

    int div=1 , i=0 ,num=0 ;

    printf ("inserte su numero\n");
    scanf ("%d" , &num);

    do{
        if (num % div == 0)
        {
            i++;
        }
        div++;
    }while (div <= num);

    if (i == 2)
    {
        printf ("el numero %d es primo" , num);
    }
    else
    {
        printf ("el numero %d NO es primo" , num);
    }
    return 0;

}
