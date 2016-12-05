/* PROGRAMA porcentajeFallas
 * Este programa calcula el porciento de fallas
 * de un jugador de futbol soccer, respecto a sus
 * tiros realizados a la portería.
 *
 * INPUT
 * El usuario ingresa un valor numérico de tipo entero (int) que representa
 * el número de tiros a la portería.
 * OUTPUT
 * El programa regresa el porcentaje de fallas,
 * respecto a los tiros realizados.
 *
 * PROGRAMADOR Oropeza Alfaro Pável Ernesto
 *
 * Matrícula: 2132015495, Carrera: Lic. en Física
 * Fecha de elaboración: Octubre, 17, 2016
 */


#include <stdio.h>
// PROGRAMA porcentajeFallas
// Calculo del porcentaje de fallas de un delantero
int main(void){
	int goles;
	float tiros_realizados, porcentaje_fallos;

	printf("Ingresa los tiros realizados por el jugador\n");
	scanf("%f", &tiros_realizados);
	printf("Ingresa los goles marcados\n");
	scanf("%d", &goles);
	porcentaje_fallos = 100 * (1 - (goles / tiros_realizados));
	printf("Porciento de fallos = %f\n", porcentaje_fallos);

	return 0;
}
