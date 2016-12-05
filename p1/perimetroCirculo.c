/* PROGRAMA perimetroCirculo
 * Este programa calcula el perimetro de un
 * circulo dado un radio.
 *
 * INPUT
 * El usuario ingresa un valor numérico de tipo real (float) que
 * representa el radio de un círculo.
 * OUTPUT
 * El programa regresa el perimetro (valor numérico, float) de el circulo.
 *
 * PROGRAMADOR Oropeza Alfaro Pável Ernesto
 *
 * Matrícula: 2132015495, Carrera: Lic. en Física
 * Fecha de elaboración: Octubre, 17, 2016
 */

#include <stdio.h>

int main(){
	float radio, perimetro;
	const float PI = 3.1416;

	printf("Ingresa el radio del circulo\n");
	scanf("%f",&radio);
	printf("Radio=%f\n",radio);
	perimetro = 2 * PI * radio;
	printf("Perimetro=%f\n", perimetro);

	return 0;
}
