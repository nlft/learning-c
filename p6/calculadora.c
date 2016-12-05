/**************************************************************/
/* Programa Práctica 6: calculadora                           */
/* Nombre: Pável Ernesto Oropeza Alfaro                       */
/* Fecha: 11 de noviembre 2016                                */
/*                                                            */
/* Descripción:                                               */
/* El programa es una calculadora tipo maizoro (aritmética)   */
/* 1. Calcula la suma de dos operandos de tipo entero         */
/* 2. Calcula la resta de dos operandos de tipo entero        */
/* 3. Calcula el producto de dos operandos de tipo entero     */
/* 4. Calcula el cociente de dos operandos de tipo entero     */
/*                                                            */
/* Por ejemplo, al correr el programa, se pide al usuario     */
/* ingrese la opción 1 o la opción 2 para realizar una        */
/* operacion o para salir del programa, respectivamente.      */
/*                                                            */
/**************************************************************/


/**************************************************************/
/* Contenido del listado:                                     */
/* El programa se compila con gcc:                            */
/* gcc -o calculadora.exe calculadora.c                       */
/* La biblioteca que se incluye es stdio.h                    */
/**************************************************************/
#include <stdio.h>
#define SALIR 2
#define OPERACION 1

/* Prototipo de funciones y funciones-procedimientos */
void PresentaMenu();
int LeeRespuesta();
void LeeOperador(char *);
int LeeOperando();
int LeeOperandoNoCero();
void Aplica(int *, int, char, int);
void Calculadora();

/* Funcion main() */
// Esta funcion-procedimiento principal es la que controla
// el inicio y fin del programa.
int main()
{
    int resp;
    do{
        PresentaMenu();
        resp = LeeRespuesta();
	if(resp == OPERACION)
	  {
	    Calculadora();
	  }
    }while(resp != SALIR);    

    return 0;
}

/* Procedimiento PresentaMenu */
// Despliega un menu para el usuario.
// 1 para hacer la operacion. 2 para salir
// del programa.

void PresentaMenu()
{
  printf("Ingresa una de las siguientes opciones:\n");
  printf("1 Para hacer Operacion\n");
  printf("2 Para Salir\n");
}

/* Funcion LeeRespuesta */
// Cualquier otra opción no válida a las indicadas en PresentaMenu()
// pide nuevamente se ingrese un valor hasta que respuesta == OPERACION
// o bien respuesta == SALIR.
// La función pasa el valor de respuesta a main.
// En main(), se evalúa si respuesta llama a Calculadora()
int LeeRespuesta(void)
{
  int respuesta;
    do{
	scanf("%d",&respuesta);
    }while((respuesta != OPERACION) && (respuesta != SALIR));    

    return respuesta;
}

/* Procedimiento LeeOperador */
//Al llamarse a Calculadora() se empieza por definir el operador
void LeeOperador(char *opr)
{
    do{
	scanf("%c",opr);
    }while((*opr != '+') && (*opr != '-') && (*opr != '*') && (*opr != '/') );
}

/* Funcion LeeOperando */
// Esta función lee el primer número a utilizar en Calculadora()
int LeeOperando()
{
   int num;
   scanf("%d",&num);
   return num;
}

/* Funcion LeeOperandoNoCero */
// En la operacion de división, se verifica que en el número
// ingresado por el usuario para el denominador sea diferente de cero.
// En caso contrario se indica el error.
int LeeOperandoNoCero()
{
   int num;
   do{
       scanf("%d",&num);
       if(num == 0){
	 printf("ERROR!\nIngresa nuevamente el denominador\n");
       }
   }while(num == 0);

   return num;
}

/* Procedimiento Aplica */
// Esta sección se encarga de realizar la operación seleccionada
// por el usuario
void Aplica( int *res, int op1, char opr, int op2)
{
   if (opr == '+')
   {
     *res = (op1 + op2);
   }
   else if (opr == '-')
     {
     *res = (op1 - op2);
     }
   else if (opr == '*')
   {
     *res = op1 * op2;
   }
   else
     *res = op1 / op2;
}

/* Procedimiento Calculadora */
// El procedimiento Calculadora() lleva el control
// para la entrada y salida de datos.
void Calculadora()
{
  int op1, op2, respuesta;
    char operador;
    printf("INGRESA LA OPERACION A REALIZAR:\n");
    printf("+ (suma), - (resta), \n* (producto) y / (división):\n");
    
    LeeOperador(&operador);
    printf("Ingresa el primer número: ");
    op1 = LeeOperando();

    if(operador == '/')
      {
	printf("Ingresa el segundo número: ");
	op2 = LeeOperandoNoCero();
    }
   else{
	printf("Ingresa el segundo número: ");	     
        op2 = LeeOperando();
   }

   Aplica(&respuesta, op1, operador, op2);
   printf("\n***********************************************\n");   
   printf("%d %c %d = %d", op1, operador, op2, respuesta);
   printf("\n");
   printf("***********************************************\n");
}
