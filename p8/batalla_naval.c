/**************************************************************/
/* Programa Práctica 8: Programa modular Batalla naval        */
/* Aleatorios                                                 */
/* Nombre: Pável Ernesto Oropeza Alfaro                       */
/* Fecha: 28 de noviembre 2016                                */
/*                                                            */
/* Descripción:                                               */
/* El programa modular genera un tablero de números aleatorios*/
/* Cada módulo tiene una tarea específica.                    */   
/* El módulo LimpiaTablero crea un tablero de 6 x 6  casillas */
/* limpias                                                    */
/* El módulo Despliega despliega el contenido del tablero.    */
/* Inicialmente sin posiciones de los barcos                  */
/* El módulo ColocaBarcos genera las posiciones de los barcos */
/*                                                            */
/**************************************************************/


/**************************************************************/
/* Contenido del listado:                                     */
/* El programa se compila con gcc:                            */
/* gcc -o batalla_naval.exe batalla_naval.c                   */
/* Las bibliotecas que se incluyen son stdio.h y stdlib.h     */
/**************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define M 6
#define N 6
#define VACIO ' '
#define MAX 36

//Prototipos
void LimpiaTablero(char B[M][N]);
void Despliega(char B[M][N]);
void ColocaBarcos(char B[M][N]);
//void PideTirada();
//void Revisa();

int main(void)
{
    srand((unsigned int)getpid());

    int posb_x, posb_y;

    char miTablero[M][N];

    LimpiaTablero(miTablero);
    Despliega(miTablero);
    ColocaBarcos(miTablero);

    return 0;
}

void LimpiaTablero(char B[M][N])
{
    int i, j;
    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            B[i][j] = VACIO;
        }
      printf("\n");
    }
}

void Despliega(char B[M][N])
{
    int i, j;
    char barco = '*';

    for(i = 0; i < M; i++){
        for(j = 0; j < M; j++){
	  printf("%c", B[i][j]);
        }
        printf("\n");
    }
}

void ColocaBarcos(char B[M][N])
{
  int i, j, pos_x, pos_y;
    char barco = '*';
    
    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++)
        {
	    pos_x = rand() % (MAX + 1);
            pos_y = rand() % (MAX + 1);
	    
	    B[i][j] = (pos_x,pos_y);
	    if((pos_x, pos_y) != VACIO){
	      B[i][j] = barco;
	    }
	    printf("%c\t", B[i][j]);
	}
        printf("\n");
    }
}

//void PideTirada
// Validar entrada de Renglon y Columna
// Haz mientras(renglon [] y columna[] - Ver el caso del examen para hacer esta validacion

