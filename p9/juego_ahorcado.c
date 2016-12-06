#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define LONG_MAX 12
#define N1 4
#define N2 5
#define N3 6
#define MAX 4

typedef char cadena[LONG_MAX];

typedef struct palabra_s
{
  cadena palabra_juego;
  cadena palabra_usuario;

  int presentada;
  int nivel;
} palabra_nivel;

//-----------------------
//	prototipos
//-----------------------
void DespliegaMenu(int *, cadena);
void CargaPalabra(int, char [], cadena);
void LeeTirada( char *);
void Compara(char [], cadena);

//-------------------
//   main: Ahorcado
//-------------------
int main(void)
{
  cadena nombre, respuesta;
  int op_usuario, i, intentos;

  /* palabra_nivel palabras[3] = { */
    
  /* }; */

  DespliegaMenu(&op_usuario, nombre);

  if (op_usuario == 1)
    {
      printf("\nTienes hasta %d oportunidades para adivinar\n", N1 + 1);      
      char palabra[N1+1];
      CargaPalabra(op_usuario, palabra, respuesta);

      intentos = 0;	

      do{

	Compara(palabra,respuesta);

      	for(i = 0; i < N1; i++)
      	  {
      	    printf("%c ",respuesta[i]);
      	  }

	printf("\t Tienes %d oportunidades", ((N1 + 1) - intentos));
	intentos++;
      }while((strcmp(palabra,respuesta) != 0) && (intentos <= (N1 + 1)));
    }
  
  else if (op_usuario == 2)
    {
      printf("\nTienes hasta %d oportunidades para adivinar\n", N2 + 1);      
      char palabra[N2+1];      
      CargaPalabra(op_usuario, palabra, respuesta);
      intentos = 0;	

      do{

	Compara(palabra,respuesta);

      	for(i = 0; i < N2; i++)
      	  {
      	    printf("%c ",respuesta[i]);
      	  }

	printf("\t Tienes %d oportunidades", ((N2 + 1) - intentos));
	intentos++;
      }while((strcmp(palabra,respuesta) != 0) && (intentos <= (N2 + 1)));

    }

  else {
    printf("\nTienes hasta %d oportunidades para adivinar\n", N3 + 1);    
      char palabra[N3+1];    
      CargaPalabra(3, palabra, respuesta);
      intentos = 0;	

      do{

	Compara(palabra,respuesta);

      	for(i = 0; i < N3; i++)
      	  {
      	    printf("%c ",respuesta[i]);
      	  }

	printf("\t Tienes %d oportunidades", ((N3 + 1) - intentos));
	intentos++;
      }while((strcmp(palabra,respuesta) != 0) && (intentos <= (N3 + 1)));      
    
  }
	/* CargaPalabra(palabra,respuesta); */


return 0;
}
//-------------------
//      DespliegaMenu
//-------------------
void DespliegaMenu(int *opt, cadena nombre)
{ 	
  printf("Bienvenido al Juego del Ahorcado. ¿Cuál es tu nombre?\n");
  scanf("%s",nombre);
  printf("********************************************\n");
  printf("Hola %s. Selecciona el grado de dificultad:\n\n", nombre);
  printf("1. Principiante\n2. Intermedio\n3. Avanzado\n");

  do 
    scanf("%d",opt);
  while((*opt != 1) && (*opt != 2) && (*opt !=3) );
}
//-------------------
//   Cargar palabra de un fichero (nivel1, nivel2 o nivel3).txt
//-------------------
void CargaPalabra(int opt, char palabra[], cadena respuesta)
{
  int i;
  if (opt == 1)
    {
      FILE *file1;
      file1 = fopen("nivel1.txt", "r");
      if (file1 != NULL)
	{
	  fscanf(file1,"%s",palabra);
	  fclose(file1);
	  for(i = 0; i < N1; i++)
	    {
	      respuesta[i] = '_';
	    }	  
	}
      else {
	printf("Error al abrir nivel1.txt\n");
      }

    }
  else if (opt == 2)
    {
      FILE *file2;
      file2 = fopen("nivel2.txt", "r");
      if (file2 != NULL)
	{
	  fscanf(file2,"%s",palabra);
	  fclose(file2);
	  for(i = 0; i < N2; i++)
	    {
	      respuesta[i] = '_';
	    }	  	  
	}
      else {
	printf("Error al abrir nivel2.txt\n");
      }
    }
  else {
    FILE *file3;
    file3 = fopen("nivel3.txt", "r");
    if (file3 != NULL)
      {
	fscanf(file3, "%s", palabra);
	fclose(file3);
	for(i = 0; i < N3; i++)
	  {
	    respuesta[i] = '_';
	  }	         
      }
    else{
      printf("Error al abrir nivel3.txt\n");
    }
  }
}
//-------------------
//    leer tirada
//-------------------
void LeeTirada(char *tirada)
{  
  printf("\nIngresa tu tirada: ");
  do{
    scanf("%c",tirada);
  }
  while((*tirada < 65 || *tirada > 122) || (*tirada > 90 && *tirada < 97));

  if (*tirada >= 65 && *tirada <= 90){
    *tirada += 32;
  }
}
//-------------------
//    Compara tirada
//-------------------
void Compara(char palabra[],cadena respuesta)
{
   char letra;
   int t = strlen(palabra), i;

   LeeTirada(&letra);

   for(i=0; i < t; i++){
     if(palabra[i] == letra)
       {
	 respuesta[i] = letra;
       }
   }
}
