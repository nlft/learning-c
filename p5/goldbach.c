/**************************************************************/
/* Programa Práctica 5: goldbach                              */
/* Nombre: Pável Ernesto Oropeza Alfaro                       */
/* Fecha: 07 de noviembre 2016                                */
/*                                                            */
/* Descripción:                                               */
/* El programa utiliza la conjetura de Goldbach que dice que  */
/* todo número entero par mayor a 2 se puede escribir como la */
/* suma de dos números primos                                 */
/*                                                            */
/**************************************************************/

#include <stdio.h>

#define VERDAD 1
#define FALSO 0

int leeEnteroValido(void)
{
  int x;
  do{
    printf("Ingresa un número para probar la conjetura de Goldbach\n");
    scanf("%d", &x);

  }while (x <= 2 || x % 2 != 0);

  return x;
}

int esPrimo(int x)
{
  int i;
  if(x == 2)
    {
      return VERDAD;
    }
  i = 2;
  while ((i < x / 2) && (x % i != 0)) {
    i = i + 1;
  }

  if(x % i == 0)
    {
      return FALSO;
    }
  else {
    return VERDAD;
  }
}

int main(void)
{
  int num, sumando1, encontre_primos;

  num = leeEnteroValido();
  encontre_primos = 0;

  sumando1 = 2;

  while ((sumando1 <= num - 2) && ! encontre_primos) {
    if(esPrimo(sumando1) && esPrimo(num - sumando1))
      {
	encontre_primos = 1;
	printf("El Número: %d %s %d %s %d\n", num, "es la suma de ", sumando1," + ", num - sumando1);
      }
    else {
      sumando1 = sumando1 + 1;
    }
  }
    
  return 0;
}
