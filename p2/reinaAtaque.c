/**************************************************************/
/* Programa Práctica 2: reinaAtaque                           */
/* Nombre: Pável Ernesto Oropeza Alfaro                       */
/* Fecha: 13 de octubre 2016                                  */
/*                                                            */
/* Descripción: Programa que dada la posición de dos reinas   */
/* en un tablero de ajedrez. Determina si las reinas atacan   */
/*                                                            */
/*                                                            */
/**************************************************************/


/**************************************************************/
/* Contenido del listado:                                     */
/* El programa se compila con gcc:                            */
/* gcc -o reinaAtaque.exe reinaAtaque.c                       */
/* La biblioteca que se incluye es stdio.h                    */
/**************************************************************/

#include <stdio.h>

#define DIAGONAL_DERECHA 1
#define DIAGONAL_IZQUIERDA -1

int main(void)
{
  int reina_blanca_c, reina_blanca_r, reina_negra_c, reina_negra_r;
  int diagonal_ataque;
  
  printf("Ingresa la columna y renglón de las reinas. \n");
  printf("Primero va la reina blanca. Después la negra\n");

  scanf("%d",&reina_blanca_c);
  scanf("%d",&reina_blanca_r);
  scanf("%d",&reina_negra_c);
  scanf("%d",&reina_negra_r);

  if(reina_negra_r == reina_blanca_r)
    {
      printf("ATAQUE EN EL MISMO RENGLON\n");
    }

  if(reina_blanca_c == reina_negra_c)
    {
      printf("ATAQUE EN LA MISMA COLUMNA\n");
    }
  
  if((reina_blanca_c - reina_negra_c) != 0)
    {
      diagonal_ataque = (reina_blanca_r - reina_negra_r) / (reina_blanca_c - reina_negra_c);

      if(diagonal_ataque == DIAGONAL_DERECHA || diagonal_ataque == DIAGONAL_DERECHA)
	{
	  printf("LAS REINAS SE ATACAN EN DIAGONAL\n");
	}
    }

  return 0;
}
