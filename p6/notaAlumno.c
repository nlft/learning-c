/**************************************************************/
/* Programa Práctica 6: NotaAlumno                            */
/* Nombre: Pável Ernesto Oropeza Alfaro                       */
/* Fecha: 11 de noviembre 2016                                */
/*                                                            */
/* Descripción:                                               */
/* El programa asigna la calificación a un alumno a           */
/* partir del número de exámenes y practicas.                 */
/*                                                            */
/*                                                            */
/**************************************************************/
/* Contenido del listado:                                     */
/* El programa se compila con gcc:                            */
/* gcc -o notaAlumno.exe notaAlumno.c                         */
/* La biblioteca que se incluye es stdio.h                    */
/**************************************************************/

#include <stdio.h>
#define AP_P 40
#define AP_E 60

int n_e, n_p;
float prom_e, prom_p;

// Prototipos de funciones y procedimientos

void LeeEnt_mayor_a(int *, float);
void Lee_y_promedia(float *, int);
void Imprime_nota(float);

int main()
{
  printf("Ingresa la cantidad de prácticas y la calificación de c/u. Después de exámenes y la calificación de cada uno\n");
  printf("Ingresa cantidad de PRACTICAS y calificación de c/u\n");
  LeeEnt_mayor_a(&n_p,0);
  Lee_y_promedia(&prom_p,n_p);
  printf("Ingresa cantidad de EXAMENES y calificación de c/u\n");  
  LeeEnt_mayor_a(&n_e,0);    
  Lee_y_promedia(&prom_e,n_e);
  Imprime_nota(prom_p * AP_P + prom_e * AP_E);  
  return 0;
}

void LeeEnt_mayor_a(int *num, float suma)
{
  scanf("%d",num);
}

void Lee_y_promedia(float *prom, int num)
{
  int j;
  float calificacion, total_calificaciones;
  j = 0;
  total_calificaciones = 0;
  do
    {
      scanf("%f",&calificacion);
       if(calificacion < 0)
  	  {
  	    j = j - 1;
  	    total_calificaciones = total_calificaciones;
  	  }
  	else {
  	  total_calificaciones = total_calificaciones + calificacion;
  	}
      j++;
    }while(j < num);
  *prom = total_calificaciones/ num;
}
void Imprime_nota(float promedio)
{
  printf("El promedio es: %f\n", (prom_p * AP_P + prom_e * AP_E) / 100);
}
