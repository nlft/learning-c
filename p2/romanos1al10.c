/**************************************************************/
/* Programa Práctica 2: romanos1al10                          */
/* Nombre: Pável Ernesto Oropeza Alfaro                       */
/* Fecha: 13 de octubre 2016                                  */
/*                                                            */
/* Descripción: Programa que pide un número del 1 al 10 y     */
/* regresa el correspondiente en romanos.                     */
/*                                                            */
/*                                                            */
/**************************************************************/


/**************************************************************/
/* Contenido del listado:                                     */
/* gcc -o romanos1al10.exe romanos1al10.c                     */
/* La biblioteca que se incluye es stdio.h                    */
/**************************************************************/
#include <stdio.h>

int main(void)
{
  int numero, romano;

  printf("Ingresa un número del 1 al 10\n");
  scanf("%d",&numero);

  switch(numero){
  case 1: printf("El número romano es I\n");
    break;
  case 2: printf("El número romano es II\n");
    break;
  case 3: printf("El número romano es III\n");
    break;
  case 4: printf("El número romano es IV\n");
    break;
  case 5: printf("El número romano es V\n");
    break;
  case 6: printf("El número romano es VI\n");
    break;
  case 7: printf("El número romano es VII\n");
    break;
  case 8: printf("El número romano es VIII\n");
    break;
  case 9: printf("El número romano es IX\n");
    break;
  case 10: printf("El número romano es X\n");
    break;    
  default:printf("Valor no válido\n");
    
  }

  return 0;
}

