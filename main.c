/*
 * File:   main.c
 * Author: joaqu
 *
 * Created on December 7, 2021, 4:56 PM
 */

/******************************************************************************
 * Software License Agreement
 *
 * Copyright � 2011 Microchip Technology Inc.  All rights reserved.
 * Microchip licenses to you the right to use, modify, copy and distribute
 * Software only when embedded on a Microchip microcontroller or digital
 * signal controller, which is integrated into your product or third party
 * product (pursuant to the sublicense terms in the accompanying license
 * agreement).
 *
 * You should refer to the license agreement accompanying this Software
 * for additional information regarding your rights and obligations.
 *
 * SOFTWARE AND DOCUMENTATION ARE PROVIDED ìAS ISî WITHOUT WARRANTY OF ANY
 * KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY
 * OF MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR
 * PURPOSE. IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR
 * OBLIGATED UNDER CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION,
 * BREACH OF WARRANTY, OR OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT
 * DAMAGES OR EXPENSES INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL,
 * INDIRECT, PUNITIVE OR CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA,
 * COST OF PROCUREMENT OF SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY
 * CLAIMS BY THIRD PARTIES (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF),
 * OR OTHER SIMILAR COSTS.
 *
 *****************************************************************************/


#include <p32xxxx.h>

//	Function Prototypes
int main(void);


extern void asmFunction(int counter);
volatile unsigned int counter =0;
int main(void) {
    int i = 0; //defining an integer variable
    
    int value =1;
    
    TRISB = 0; 
    TRISA = 1;
    LATB =0;
    DDPCONbits.JTAGEN = 0;
    
    
    void wait() {
        for(i=0; i<20000;i++){
        //wait
            
        }
    }
    int status(int counter){
            if(counter ==5){
            return 0;
        }
    }
    while (value == 1) {
        counter =0;
         //Invert RA1 pin
        LATBbits.LATB15 = 1;
     
       asmFunction(counter);
        
        if(PORTAbits.RA2){
            if(status(counter) == 0){return 0;};
        }
        wait();
        LATBbits.LATB15 = 0;
        LATBbits.LATB14 = 1;
        asmFunction(counter);
        //counter++;
        if(PORTAbits.RA2){
            if(status(counter) == 0){return 0;};
        }
        wait();
        LATBbits.LATB14 = 0;
        LATBbits.LATB13 = 1;
        asmFunction(counter);
        if(PORTAbits.RA2){
            if(status(counter) == 0){return 0;};
        }
        wait();
        LATBbits.LATB13 = 0;
        LATBbits.LATB11 = 1;
        asmFunction(counter);
        if(PORTAbits.RA2){
            if(status(counter) == 0){return 0;};
        }
        wait();
        LATBbits.LATB11 = 0;
        LATBbits.LATB10 = 1;
        asmFunction(counter);
        if(PORTAbits.RA2){
            if(status(counter) == 0){return 0;};
        }
        wait();
        LATBbits.LATB10 = 0;
        LATBbits.LATB9 = 1;
        asmFunction(counter);
        if(PORTAbits.RA2){
            if(status(counter) == 0){return 0;};
        }
        wait();
        LATBbits.LATB9 = 0;
        LATBbits.LATB8 = 1;
        asmFunction(counter);
        if(PORTAbits.RA2){
            if(status(counter) == 0){return 0;};
        }
        wait();
        LATBbits.LATB8 = 0;
        LATBbits.LATB7 = 1;
        asmFunction(counter);
        if(PORTAbits.RA2){
            if(status(counter) == 0){return 0;};
        }
        wait();
        LATBbits.LATB7 = 0;
        LATBbits.LATB5 = 1;
        asmFunction(counter);
        if(PORTAbits.RA2){
            if(status(counter) == 0){return 0;};
        }
        wait();
        LATBbits.LATB5 = 0;
        asmFunction(counter);
        if(PORTAbits.RA2){
            if(status(counter) == 0){return 0;};
        }
        wait();
        
        
        
        
     
    }
    
    
}



