/* 
 * File:   newmain.c
 * Author: pc
 *
 * Created on 16 de octubre de 2019, 11:04 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include "configuracion.h"

void main()
{
    TRISB = 0b00000000;
    while(1){
        RB0 = 1; //enciende el led RB0
        __delay_ms(1000);
        RB0 = 0;
        __delay_ms(1000);//retardo de un segundo
    }
    
}
