// Selection Sorting Algorithm

#include <stdio.h>
#include <stdlib.h>



#define swap(a,b)   temp = a;\
                    a    = b;\
                    b    = temp

#define arraylength(array)         sizeof(array)/sizeof(int)


#define print_array(array)          for(int index = 0;index<arraylength(array);index++)\
                                    printf("%d",array[index])

void selection_sorting(int*,int);
int temp;
int main()
{

    int array[]={5,3,4,2,1,6};

    selection_sorting(array,arraylength(array));


    print_array(array);


    return 0;

}
void selection_sorting(int* arr, int array_length){
int max_number,max_index;

for(int j=0; j<array_length ;j++){ // loop array_length times
    max_number=arr[0];
    max_index=0;

    for(int i=0; i<array_length-j ;i++){  // loop different number of time and each time--> get maximum number
        if(max_number<arr[i]){
        max_number = arr[i];
        max_index  = i;
        }//condition to get maximum
    }       // i loop


swap(arr[max_index],arr[array_length-1-j]); // then swap it
                                          //then decrease your search view inside array
}      // j loop

} // function

//i loop --> n time
//j loop --> n time
//worst case = O(n*n)
