/**************************************************************/
/* Programa Práctica 5: numerosAmigos                         */
/* Nombre: Pável Ernesto Oropeza Alfaro                       */
/* Fecha: 07 de noviembre 2016                                */
/*                                                            */
/* Descripción:                                               */
/* Dados dos números enteros n y m mayores a cero y diferentes*/
/* se dice que son amigos si:                                 */
/* 1. La suma de los divisores de n es igual a m              */
/* 2. La suma de los divisores de m es igual a n              */
/* 3. n no se cuenta como divisor de n                        */
/* 4. m no se cuenta como divisor de m                        */
/* Por ejemplo, los números 220 y 284 son amigos              */
/*                                                            */
/**************************************************************/


/**************************************************************/
/* Contenido del listado:                                     */
/* El programa se compila con gcc:                            */
/* gcc -o numerosAmigos.exe numerosAmigos.c                   */
/* La biblioteca que se incluye es stdio.h                    */
/**************************************************************/

#include <stdio.h>

int leeNumero(void)
{
  int num;
  do{
    scanf("%d", &num);
  }while (num < 0);

  return num;    
}

int sumaDivisores(int n)
{
  int i, suma_divisores;
  i = 1;
  suma_divisores = 0;
  while (i <= n / 2) {
    if(n % i == 0)
      {
	suma_divisores = i + suma_divisores;
      }
    i++;
  }
  return suma_divisores;

}

int main(void)
{
  int m, n, sumad1, sumad2;

  m = leeNumero();
  n = leeNumero();

  if(m == n)
    {
      m = leeNumero();
    }
  sumad1 = sumaDivisores(m);
  sumad2 = sumaDivisores(n);

  if(sumad1 == n && sumad2 == m)
    {
      printf("Los números son amigos\n");
    }
  else {
    printf("Los números no son amigos\n");
  }
  return 0;
}
