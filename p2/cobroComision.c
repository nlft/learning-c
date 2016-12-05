/**************************************************************/
/* Programa Práctica 2: cobroComision                          */
/* Nombre: Pável Ernesto Oropeza Alfaro                       */
/* Fecha: 13 de octubre 2016                                  */
/*                                                            */
/* Descripción:                                               */
/* Programa que lee el saldo actual y determina si            */      
/* cobra comision a la cuenta o la deja con un saldo minimo   */
/*                                                            */
/*                                                            */
/**************************************************************/


/**************************************************************/
/* Contenido del listado:                                     */
/* El programa se compila con gcc:                            */
/* gcc -o combroComision.exe cobroComision.c                  */
/* La biblioteca que se incluye es stdio.h                    */
/**************************************************************/

#include <stdio.h>

#define SALDO_MIN 100
#define COMISION 5

int main(void){
	float saldo, saldo_final;

	printf("Dame saldo\n");

	scanf("%f",&saldo);

	saldo_final = saldo - COMISION;

	if (saldo_final < SALDO_MIN)
		saldo_final = SALDO_MIN;

	printf("Tu saldo es: %f\n", saldo_final);

	return 0;
}
