/* 
  Programa ejemplo uso de operadores & y *
*/

#include <stdio.h>


main ()
{
   int i,j;
   int *ap_i,*ap_j;   /* Declaración de apuntadores */

    i = 80;
    j = i + 1;
    
    /* Incialización de apuntadores */
    ap_i = &i;
    ap_j = &j;
    
    /* acceso al contenido de una variable tipo apuntador */
    printf("i=%d y su dirección es %d\n",i,*ap_i);
    printf("j=%d y su dirección es %d\n",i,*ap_j);
    
    /* Corroboramos que la variable apuntador mantiene la dirección correcta */
    printf("la dirección de i es: %X:%X\n",&i,ap_i);
    printf("la dirección de j es: %X:%X\n",&j,ap_j);
   
    /* Aplicamos operaciones de suma y decremento a los apuntadores*/
    ap_i--;
    printf("una antes de ap_i es: %X\n",ap_i);
    ap_j++;
    printf("una después de ap_j es: %X\n",ap_j);

    /* Corroboramos contenidos en las nuevas direcciones*/
    printf("la dirección en ap_i es: %X y contiene %d\n",ap_i, *ap_i);
    printf("la dirección en ap_j es: %X y contiene %d\n",ap_j, *ap_j);
   
    
    /* Los apuntadores son variables que también están en memoria y tienen una dirección*/
    printf("la dirección de ap_i es: %X\n",&ap_i);
    printf("la dirección de ap_j es: %X\n",&ap_j);
    
}
