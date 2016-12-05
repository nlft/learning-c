/**************************************************************/
/* Programa Práctica 3: combinacionIntentos                   */
/* Nombre: Pável Ernesto Oropeza Alfaro                       */
/* Fecha: 20 de octubre 2016                                  */
/*                                                            */
/* Descripción:                                               */
/* Programa en el que el usuario sólo puede dar un número     */      
/* constante predefinido de dígitos. Si al agotarse el número */
/* de intentos no se ha dado la combinación correcta, el      */
/* algoritmo termina y despliega "ALARMA ACTIVADA"            */
/*                                                            */
/*                                                            */
/**************************************************************/


/**************************************************************/
/* Contenido del listado:                                     */
/* El programa se compila con gcc:                            */
/* gcc -o combinacionIntentos.exe combinacionIntentos.c       */
/* La biblioteca que se incluye es stdio.h                    */
/**************************************************************/

#include <stdio.h>
#define NUM_INTENTOS 4
#define D1 8
#define D2 3

int main(void)
{
  int num1, num2, intentos;

  num2 = -1;
  intentos = 0;
  
  do{
    num1 = num2;
    scanf("%d",&num2);
    intentos++;
 
    if((intentos <= NUM_INTENTOS) && ((num1 == D1) && (num2 == D2))){
      printf("ABIERTO\n");      
    }
    
    if((intentos > (NUM_INTENTOS - 1)) && ((num1 != D1) && (num2 != D2))){
      printf("ALARMA ACTIVADA\n");    
      break;
    }    
  }
    while ((num1 != D1) || (num2 != D2) && intentos <= NUM_INTENTOS);
  
  return 0;
}
