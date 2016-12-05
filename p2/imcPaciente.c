/**************************************************************/
/* Programa Práctica 2: imcPaciente                           */
/* Nombre: Pável Ernesto Oropeza Alfaro                       */
/* Fecha: 13 de octubre 2016                                  */
/*                                                            */
/* Descripción: Programa que pide la estatura y el peso de un */
/* paciente y calcula el indice de masa corporal de éste y    */
/* determina si tiene a) peso bajo, b) peso normal,           */
/* c) sobrepeso y d) obesidad                                 */
/*                                                            */
/* regresa el correspondiente en romanos.                     */
/*                                                            */
/*                                                            */
/**************************************************************/


/**************************************************************/
/* Contenido del listado:                                     */
/* El programa se compila con gcc:                            */
/* gcc -o imcPaciente.exe imcPaciente.c                       */
/* La biblioteca que se incluye es stdio.h                    */
/**************************************************************/


#include <stdio.h>

#define PESO_BAJO 18.5
#define SOBRE_PESO 25
#define OBESIDAD 30

int main(void)
{
  float peso, estatura, imc;
  printf("Ingresa tu peso (Kg) y estatura en (m)\n");

  scanf("%f",&peso);
  scanf("%f", &estatura);
  if(estatura != 0)
    {
      
      imc = peso / (estatura * estatura);

      if(imc < PESO_BAJO)
	{
	  printf("Su peso es bajo. Su imc es: %f\n",imc);
	}
      else if(imc > PESO_BAJO && imc < SOBRE_PESO){
	  printf("Su peso es normal. Su imc es: %f\n",imc);
      }
      else if(imc >= SOBRE_PESO && imc < OBESIDAD){
	  printf("Usted tiene sobrepeso. Su imc es: %f\n",imc);
      }      
      else {
	  printf("Usted tiene obesidad. Su imc es: %f\n",imc);	
      }

    }
  else{
        printf("Los valores de estatura deben ser > 0 \n");
  }
  return 0;
}

