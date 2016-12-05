/**************************************************************/
/* Programa Práctica 5: numeroPerfecto                        */
/* Nombre: Pável Ernesto Oropeza Alfaro                       */
/* Fecha: 07 de noviembre 2016                                */
/*                                                            */
/* Descripción:                                               */
/* El programa determina si dado un número m es perfecto, si: */
/* 1. La suma de sus divisores de m es igual a m              */
/* Por ejemplo, el número 6 es un número perfecto             */
/*                                                            */
/**************************************************************/


/**************************************************************/
/* Contenido del listado:                                     */
/* El programa se compila con gcc:                            */
/* gcc -o numeroPerfecto.exe numeroPerfecto.c                 */
/* La biblioteca que se incluye es stdio.h                    */
/**************************************************************/
#include <stdio.h>

int leeNumero()
{
  int num;
  do{
    scanf("%d",&num);
  }while (num < 0);

  return num;
}

int sumaDivisores(int m)
{
  int i, suma_divisores;
  i = 1;
  suma_divisores = 0;

  while (i <= m / 2) {
    if (m % i == 0)
      {
	suma_divisores = i + suma_divisores;
      }
    i++;
  }
  return suma_divisores;
}

int main(void)
{
  int m, sumad;
  m = leeNumero();
  sumad = sumaDivisores(m);

  if(sumad == m)
    {
      printf("El número %d es perfecto\n", m);
    }
  else {
    printf("El número no es perfecto %d\n", m);
  }
  return 0;
}
