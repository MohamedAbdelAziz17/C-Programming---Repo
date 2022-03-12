#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){

char cond;

while(cond!='e'){

int x=0;

/*take user number*/
printf("Enter a number: ");

scanf("%d",&x);

int z[16];

/*print number in Decimal*/
printf("Number Entered in Decimal: %d\n",x);

/*convert number to binary*/
int i=0;

while(i != 16)
{
    z[i]=x%2;
    x/=2;
    i++;
} 

/*print number in Binary*/
printf("Number Entered in Binary: ");

    for(int j=15;j>=0;j--)
        printf("%d",z[j]);

        printf("\n");


/* program end condition */
printf("enter e to exit or enter c to continue: ");

scanf(" %c",&cond);

printf("\n");

}  /*while loop*/


printf("\"Thanks!......\"");
   return 0;
}
