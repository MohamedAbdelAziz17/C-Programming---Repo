#include <stdio.h>
#include <stdlib.h>
int temp;
#define swap(a,b)   temp = a;\
                    a    = b;\
                    b    = temp

#define arraylength(array)         sizeof(array)/sizeof(int)


#define print_array(array)          for(int index = 0;index<arraylength(array);index++)\
                                    printf("%d",array[index])

void bubble_sort(int*, int);
int main()
{
    int sensor_data[]={7,2,1,3,8,6,4,5};

    bubble_sort(sensor_data,arraylength(sensor_data));

    print_array(sensor_data);


    return 0;
}


void bubble_sort(int* arr, int length){

int i,j,flag;

for(i=0 ; i<=length-1;i++){
flag = 0;

for(j=0 ; j<= length-2; j++){
    if(arr[j]>arr[j+1]){
        flag = 1;
        swap(arr[j],arr[j+1]);
        }
    }

    if(flag!=1) // if swap doesn't happen then it's sorted
        return;
}


}
