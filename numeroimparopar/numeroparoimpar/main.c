#include <stdio.h>


int esPrimo(int numero);

int main(void) {
  int contador = 0;
  int inicio=2, fin , password=1357;


    while (password == 1357)
    {
        printf("Indica hasta que numero quieres conocer los numeros primos, pero que no pase de 1000\n");
        scanf("%d", &fin);
        if(fin <= 1000)
        {
            for (int x = inicio; x <= fin; x++)
            {
                if (esPrimo(x))
                {
                    printf("%d,", x);
                }
            }
        }
        else
        {
            printf ("ERROR no introdujo un numero menor a 1000\n");
        }
        printf ("\nsi desea contniua escriba 1357\n");
        scanf ("%d" , &password);
    }
     if (password != 1357)
    {
        printf ("FIN DEL PROGRAMA \n");
    }

    return 0;
    }

int esPrimo(int numero) {
  if (numero == 0 || numero == 1) return 0;
  if (numero == 4) return 0;
  for (int x = 2; x < numero / 2; x++) {
    if (numero % x == 0) return 0;
  }
  return 1;s
}

