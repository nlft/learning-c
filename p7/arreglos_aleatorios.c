/**************************************************************/
/* Programa Práctica 7: Programa modular Arreglo de números   */
/* Aleatorios                                                 */
/* Nombre: Pável Ernesto Oropeza Alfaro                       */
/* Fecha: 21 de noviembre 2016                                */
/*                                                            */
/* Descripción:                                               */
/* El programa modular genera un arreglo de números aleatorios*/
/* Cada módulo tiene una tarea específica.                    */   
/* El módulo Randomizate crea un Arreglo con números Aleatorio*/
/* El módulo Despliega despliega el contenido del arreglo.    */
/* El módulo SubArregloYMenor genera un subarreglo del arreglo*/
/* original y encuentra el menor número e imprime su posición */
/* en el arreglo.                                             */
/* El módulo Intercambia intercambia  contenido entre dos     */
/* posiciones del arreglo                                     */
/* El módulo OrdenaContenido ordena  contenido del subarreglo */
/* de menor a mayor                                           */
/*                                                            */
/**************************************************************/


/**************************************************************/
/* Contenido del listado:                                     */
/* El programa se compila con gcc:                            */
/* gcc -o numeroPerfecto.exe numeroPerfecto.c                 */
/* Las bibliotecas que se incluyen son stdio.h y stdlib.h     
/**************************************************************/

#include <stdio.h>
#include <stdlib.h>
#define N 50
#define MAX 100

/* Prototipos */
void Randomizate(int *, int);
void Despliega(int[], int);
void SubArregloYMenor(int[], int, int, int);
void IntercambiaContenido(int[], int, int, int, int, int);
void OrdenaContenido(int[], int, int, int);

int main(void)
{
  int myArray[N], i, i_ini, i_fin;

  srand((unsigned int)getpid());

  for(i = 0; i < N; i++){
    myArray[i] = i;
    Randomizate(&myArray[i], N);
  }
  
  Despliega(myArray,N);  
  SubArregloYMenor(myArray,N,2,12);
  IntercambiaContenido(myArray,N,2,5,2,4);
  OrdenaContenido(myArray,N,2,12);

  return 0;
}

void Randomizate(int A[], int m)
{
  *A = rand() % (MAX + 1);
}
void Despliega(int A[], int m)
{
 int i;
 for(i = 0; i < m; i++){
   printf("A[%d]: %d\n", i, A[i]);
 }
}
void SubArregloYMenor(int B[], int m, int ini, int fin)
{
  if(fin > m){
    printf("Cuidado con los índices al llamar el subarreglo\n");
  }
  else{
    int i;    
    int menor = B[ini], posicion = ini;
    for(i = ini; i < fin; i++){
      if(B[i] < menor){
	menor = B[i];
	posicion = i;
      }
      printf("B[%d]: %d\n", i, B[i]);
    }
    printf("El menor número en el subarreglo B es %d y su posición es %d\n", menor, posicion);      
  }
}
void IntercambiaContenido(int A[], int m, int ini, int fin, int pos1, int pos2)
{
  if((pos1 > m) || (pos2 > m) || (pos1 < ini) || (pos2 > fin)){
    printf("Cuidado con los índices al llamar el subarreglo\n");   
  }
  else {
    int i, aux;
    for(i = ini; i < fin; i++){
      printf("A[%d]: %d\n", i, A[i]);
    }
    aux = A[pos1];
    A[pos1] = A[pos2];
    A[pos2] = aux;
    
    printf("Los valores del arreglo A intercambiados son: A[%d]: %d y A[%d]: %d\n", pos1, A[pos1], pos2, A[pos2]);
  }
}
void OrdenaContenido(int A[], int m, int ini, int fin)
{
   printf("Primero, el subarreglo sin ordenar: \n");
   int i, j, menor, mayor, pos1, pos2, aux;

   for(i = ini; i < fin; i++){
     printf("A[%d]: %d\n", i, A[i]);
   }

   printf("**************************\n");
   printf("Ahora el arreglo ordenado.\n");
   do{
     j = 0;
     for(i = ini; i < fin; i++){
       if(A[i] > A[i+1]){
	 j = 1;
	 aux = A[i];
	 A[i] = A[i+1];
	 A[i+1] = aux;
       }
     }
   
   }while(j == 1);
   for(i = ini; i < fin; i++){
     printf("A[%d]: %d\n", i, A[i]);
   }
}
