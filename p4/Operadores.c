/* 
 * Programa ejemplo para operadores aritméticos en C 
 *
 * ++, -- en posicion prefija y posfija y
 * *=, -=, /=, *=
 *  
 * Elaboró: Elizabeth Pérez-Cortés
 * 
 * 
 */
#include <stdio.h>

main()
{
  int var_entera, a;
  
  var_entera = 10;
  
  printf("1:Ahora la variable vale %d\n", var_entera); 
  printf("2:Ahora la variable vale %d\n", var_entera++); // Se incrementa después de usarla
  printf("3:Ahora la variable + 1 vale %d\n", var_entera+1);   // Constatamos que ahora vale 11 y el operador + no la cambia
  printf("3:Ahora la variable vale %d\n", var_entera);   // Constatamos que ahora vale 11
  printf("4:Ahora la variable vale %d\n", ++var_entera); // Constatamos que primero se incrementa y luego se usa el valor
  
  // Otro ejemplo, ahora con --
  
  a = var_entera--;
  
  printf("5: a vale %d\n", a); // Se decrementa después de usarla

  a = --var_entera;

  printf("6: a vale %d\n", a); // Se decrementa y después se usa
  
  a += 2;
  printf("7: a vale %d\n", a); // Se incrementa en 2 
  a -= 2;
  printf("8: a vale %d\n", a); // Se decrementa en 2
  a *= 3;
  printf("9: a vale %d\n", a); // Se multiplica por 3
  a /= 3;
  printf("10: a vale %d\n", a); // Se divide por 3  
  
  // Ejemplo de precedencias
  
  printf("El valor de la exp es: %d o %d o %d\n", (8+4)*(3%2), 8+4*3%2, ((8+4)*3)%2);
   
}