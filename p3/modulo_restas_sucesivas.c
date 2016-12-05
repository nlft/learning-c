/**************************************************************/
/* Programa Práctica 3: modulo_restas_sucesivas               */
/* Nombre: Pável Ernesto Oropeza Alfaro                       */
/* Fecha: 20 de octubre 2016                                  */
/*                                                            */
/* Descripción:                                               */
/* Programa que calcula el modulo de 2 números "a" y "b" por  */      
/* restas sucesivas. Por ejemplo, si el usuario da 11 y 3,    */
/* el resultado debe ser 2                                    */
/*                                                            */
/*                                                            */
/**************************************************************/


/**************************************************************/
/* Contenido del listado:                                     */
/* El programa se compila con gcc:                            */
/* gcc -o modulo_restas_sucesivas modulo_restas_sucesivas.c   */
/* La biblioteca que se incluye es stdio.h                    */
/**************************************************************/

#include <stdio.h>

int main(void){
	int a, b, acumulador;
	
	printf("Ingresa dos números para calcular su módulo a MOD b\n");
	printf("Primero Ingresa el valor de a\n");
	scanf("%d", &a);
	scanf("%d", &b);

	acumulador = 0;

	while (a >= b)
	{
		acumulador += 1;
		a = a - b;
	}

	printf("Módulo: %d\n", a);
	
	return 0;
}
