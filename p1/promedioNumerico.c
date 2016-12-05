/* PROGRAMA promedioNumerico
 * Este programa calcula el promedio numerico de un alumno dada
 * la cantidad de UEAS con S, B y MB.
 *
 * INPUT
 * El usuario ingresa un valor numérico de tipo entero (int) que representa
 * el número de UEAS con la calificación correspondiente.
 * OUTPUT
 * El programa regresa el promedio numérico (valor numérico, float) del alumno.
 *
 * PROGRAMADOR Oropeza Alfaro Pável Ernesto
 *
 * Matrícula: 2132015495, Carrera: Lic. en Física
 * Fecha de elaboración: Octubre, 17, 2016
 */

#include <stdio.h>

int main(void){
	int S=6,B=8,MB=10;
	int UEAS_TOTAL, UEA_S, UEA_B, UEA_MB;

	float SUMA_UEAS, promedio;

	printf("Ingresa cuantas UEAS con S, cuantas con B y cuantas con MB\n");
	scanf("%d %d %d",&UEA_S, &UEA_B, &UEA_MB);

	UEAS_TOTAL = UEA_S * S + UEA_B * B + UEA_MB * MB;
	SUMA_UEAS = UEA_S + UEA_B + UEA_MB;

	promedio = UEAS_TOTAL / SUMA_UEAS;

	printf("El promedio numerico del alumno es:  %f\n", promedio);

	return 0;
}
