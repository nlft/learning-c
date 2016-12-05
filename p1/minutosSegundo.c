/* PROGRAMA minutosSegundo
 * Este programa calcula el número de minutos a
 * partir de un número entero de segundos.
 * INPUT
 * El usuario ingresa un valor entero de segundos.
 * OUTPUT
 * El programa regresa el número de minutos (tipo flotaante) equivalentes.
 *
 * PROGRAMADOR Oropeza Alfaro Pável Ernesto
 *
 * Matrícula: 2132015495, Carrera: Lic. en Física
 * Fecha de elaboración: Octubre, 17, 2016
 */


#include <stdio.h>

int main(void){
	int t_seg;
	float minutos;

	printf("Ingresa el numero de segundos\n");
	scanf("%d",&t_seg);
	minutos = t_seg / 60.0;

	printf("Tiempo en minutos=%f\n",minutos);
	return 0;
}
