/**************************************************************/
/* Programa Práctica 3: sumatoriaCuadrada                     */
/* Nombre: Pável Ernesto Oropeza Alfaro                       */
/* Fecha: 20 de octubre 2016                                  */
/*                                                            */
/* Descripción:                                               */
/* Programa que lee dos números "a" y "b", el programa guarda */      
/* el menor en a y el mayor en b                              */
/* y calcula la expresion que incluye una sumatoria al        */ 
/* cuadrado                                                   */
/* ((sum_{a}^{b} i)^2 + b) / ((b - a) + 1)                    */
/*                                                            */
/*                                                            */
/**************************************************************/


/**************************************************************/
/* Contenido del listado:                                     */
/* El programa se compila con gcc:                            */
/* gcc -o sumatoriaCuadrada.exe sumatoriaCuadrada.c           */
/* La biblioteca que se incluye es stdio.h                    */
/**************************************************************/



#include <stdio.h>

int main(void)
{
	int a, x, b, i, sumatoria;
	float numerador, denominador, total;

	printf("Ingresa dos números a y b. \n");
	scanf("%d", &a);
	scanf("%d", &b);

	if(a > b){
		x = a;
		a = b;
		b = x;
	}

	sumatoria = 0;
	total = 0;
	
	for(i = a; i <= b; i++)
	{
	  sumatoria += i;
	}	

	numerador = (sumatoria * sumatoria) + b;
	denominador = (b - a) + 1;

	total = numerador / denominador;

	printf("El valor de la expresión es: %f\n", total);

	return 0;
}
