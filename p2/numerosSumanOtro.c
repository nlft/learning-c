/*********************************************************************/
/* Programa Práctica 2: numerosSumanOtro                             */
/* Nombre: Pável Ernesto Oropeza Alfaro                              */
/* Fecha: 13 de octubre 2016                                         */
/*                                                                   */
/* Descripción:                                                      */
/* Dados tres números, el programa determina si dos de ellos         */
/* suman al otro o no                                                */
/*                                                                   */
/*********************************************************************/


/*********************************************************************/
/* Contenido del listado:                                            */
/* El programa se compila con gcc:                                   */
/* gcc -o numerosSumanOtro.exe numerosSumanOtro.c                    */
/* La biblioteca que se incluye es stdio.h                           */
/*                                                                   */
/*********************************************************************/

#include <stdio.h>

int main(void)
{
  int x, y, z, sumax, sumay, sumaz;

  printf("Ingresa tres números enteros\n");
  scanf("%d", &x);
  scanf("%d", &y);
  scanf("%d", &z);

  sumaz = x + y;
  sumax = y + z;
  sumay = x + z;

  if(sumaz == z)
    {
      printf("El tercer número %d", z);
      printf(" es igual a la suma de los dos primeros %d y %d \n", x, y);
    }

  else if(sumax == x)
    {
      printf("El primer número %d", x);
      printf(" es igual a la suma de los dos últimos %d y %d \n", y, z);
    }

  else if(sumay == y)
    {
      printf("El segundo número %d", y);
      printf(" es igual a la suma del primero y el último %d y %d \n", x, z);
    }
  else {
    printf("Ninguno de los números es igual a la suma de los otros dos\n");
  }

  return 0;
}
