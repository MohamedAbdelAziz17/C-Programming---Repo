#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>



/*
Develop the function “Find_Repeated(int* are, int size)”

Which counts the number of repeated elements in the passed array.

Ex:
Arr[7] = {1,2,3,2,1,4} ;
The numbers 2 and 1 are repeated, so we have two repeated elements.

*/


uint8_t Find_Repeated(int* ,size_t);


int main()
{
    int array[]={1,1,2,3,2,3};

    size_t array_size = sizeof(array) / sizeof(array[0]);

    printf("Repeated Elements: %d\n", Find_Repeated(array,array_size));


    return 0;
}



uint8_t Find_Repeated(int *p, size_t size)
{

    uint8_t n_rep;

    for(int i = 0 ; i < size ; i++)
    {

        for(int j = i+1 ; j < size ; j++)
        {

            if(p[i] == p[j])
            {
                n_rep ++;

            }

        }

    }


    return n_rep;

}



/* one loop from geeksforgeeks */
/*
for(int i = 0; i < size; i++)
  {
    if(p[abs(p[i])] > 0) // if positive >>> store as negative
      p[abs(p[i])] = -p[abs(p[i])];
    else
      printf(" %d ", abs(p[i])); // if negative >>> it's repeated
  }
*/
