/**************************************************************/
/* Programa Práctica 2: glucosaSangre                         */
/* Nombre: Pável Ernesto Oropeza Alfaro                       */
/* Fecha: 13 de octubre 2016                                  */
/*                                                            */
/* Descripción:                                               */
/* Dado el nivel de glucosa en la sangre de una persona       */      
/* despliega una advertencia en caso de que éste exceda       */
/* los niveles recomendados                                   */
/*                                                            */
/**************************************************************/


/**************************************************************/
/* Contenido del listado:                                     */
/* El programa se compila con gcc:                            */
/* gcc -o glucosaSangre.exe glucosaSangre.c                   */
/* La biblioteca que se incluye es stdio.h                    */
/**************************************************************/

#include <stdio.h>

#define NIVEL_IDEAL_S 100

int main(void){
	int nivel_paciente;

	printf("Ingresa el nivel de glucosa\n");
	scanf("%d", &nivel_paciente);

	if(nivel_paciente > NIVEL_IDEAL_S)
		printf("NIVEL DE GLUCOSA ALTO!!!\n");

	return 0;
}
