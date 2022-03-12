#include <stdio.h>
#include <stdlib.h>

void Convert_LE_To_BE(signed char *);


int main()
{
    printf("This Code Converts Little Endian to Big Endian or vise versa\n\n");

    signed long x = -1880052993;          /* x in hex 8f.f0.aa.ff */

    printf("Number in hex: %x", x);

    Convert_LE_To_BE(&x);

    printf("\n\nBig Endian:    %x\n", x);   /*should be ff.aa.f0.8f*/


    return 0;
}


void Convert_LE_To_BE(signed char *B1){

    signed char tempVar1 = 0;
    signed char tempVar2 = 0;

    tempVar1 = *(B1+3);             /* Store Bit4 in temporary variable */

    *(B1+3) = *B1;                  /* Bit4 = Bit1 */

    *B1 = tempVar1;                 /* Bit1 = Bit4 */

    tempVar2  = *(B1+1);            /* Store Bit2 in temporary variable */

    *(B1+1) = *(B1+2);              /* Bit2 = Bit3 */

    *(B1+2) = tempVar2;             /* Bit3 = Bit2 */

}


