/* 
 * Programa para corroborar los números máximos que se 
 * pueden representar con los distintos tipos enteros.
 * 
 * Elaboró: Elizabeth Pérez-Cortés
 * 
 */
#include <stdio.h>

int main(void)
{
  int num=0, prev=-1;
  
  printf("En este programa recorremos el tipo int que requiere %d bytes para su almacenarse\n", sizeof(int));
  
  do 
  {   //printf("num=%d\n",num);
      num++;
      prev++;
  } while (num > 0);
  
  printf("Dejó de ser positivo después del %d y se volvió %d\n", prev, num);

  do 
  {   //printf("num=%d\n",num);
      num++;
      prev++;
  } while (num);
  
  printf("Se hizo 0 después del %d\n", prev);

  return 0;
  
}