#include <xc.h>
    .text
    .set noreorder
    
    .global asmFunction
    .ent asmFunction
   
    asmFunction:
    addiu sp,sp,-4
    sw s0, 0(sp)
    
    
    addiu s1,zero,counter
    addiu s1, a0, 1
    sw s1, counter
    
   
    lw s0, 0(sp) 				/* Return value	from stack into	register */
    addiu sp, sp, 4 
    
    jr ra
    nop
    .end asmFunction
    
    