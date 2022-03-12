#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void printBinary(int32_t digit);

int main()
{

    float float_num = 8.25;      // [sign 1-bit][exponent 8-bit][mantissa 23-bit]

    int32_t *ptr = &float_num;   //float is 4 bytes = 32 bits require pointer to access 32 bit

    printf("Number in Decimal: %d \n",*ptr);
    printf("Number in Binary: ");

    printBinary(*ptr);


    return 0;
}


void printBinary(int32_t digit){

char z[32];
char i=0;
while(i!=32){
    z[i]=digit%2;
    digit/=2;
    i++;
}
    for(char j=31;j>=0;j--){
        printf("%d",z[j]);

        if(j == 23)
            printf(":");
        else if(j== 23+8)
            printf(":");

    }

    printf("\n");
}


