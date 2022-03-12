#include <stdio.h>
#include <stdlib.h>

int temp;
#define swap(a,b)   temp = a;\
                    a    = b;\
                    b    = temp

#define arraylength(array)         sizeof(array)/sizeof(int)


#define print_array(array)          for(int index = 0;index<arraylength(array);index++)\
                                    printf("%d",array[index])

void insertion_sort(int*,int);
int main()
{
    int sensor_data[]={7,2,1,3,8,6,4,5};

    insertion_sort(sensor_data,arraylength(sensor_data));

    print_array(sensor_data);


    return 0;
}

void insertion_sort(int* arr,int length){

int i,value,hole;

for(i=1 ; i<= length-1 ; i++){
    value=arr[i];
    hole = i;

    while(hole>0 && arr[hole-1] > value){
        arr[hole] = arr[hole-1]; // assign the bigger value to hole
        hole--; // shift the hole
    }

    arr[hole] = value; // assign the smaller value into the shifted hole


}



}
