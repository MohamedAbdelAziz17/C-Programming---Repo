#include <stdio.h>
#include <stdlib.h>

int temp;
#define swap(a,b)   temp = a;\
                    a    = b;\
                    b    = temp

#define arraylength(array)         sizeof(array)/sizeof(int)


#define print_array(array)          for(int index = 0;index<arraylength(array);index++)\
                                    printf("%d ",array[index])


void merge_sorting(int *, int);
void merge(int*,int  ,int*,int   ,int*,int);


int main()
{
    int sensor_data[]={2,4,1,6,8,5,3,7,9};

    merge_sorting(sensor_data,arraylength(sensor_data));

    print_array(sensor_data);



    return 0;
}
void merge(int* array_left,int array_left_length ,int* array_right,int array_right_length ,int* arr, int arr_length){

int i =0, j =0 , k =0;

while(i < array_left_length && j < array_right_length){

    if(array_left[i] <= array_right[j]){
        arr[k] = array_left[i];

        i++;
    }
    else{
        arr[k] = array_right[j ];
        j++;
    }
      k++;

}

while(i < array_left_length){
    arr[k] = array_left[i];
    i++;
    k++;
}
while(j < array_right_length){
    arr[k] = array_right[j];
    j++;
    k++;
}


}

void merge_sorting(int* arr,int length){

    int mid,i;

    if(length<2)
        return;

    mid = length/2; // 4
    int array_left[mid],array_right[length-mid];

    for(i = 0; i<=mid-1 ;i++)
        array_left[i] = arr[i];

    for(i = mid; i<=length-1 ;i++)
        array_right[i-mid] = arr[i];


    merge_sorting(array_left,arraylength(array_left));

    merge_sorting(array_right,arraylength(array_right));

    merge(array_left,arraylength(array_left),array_right,arraylength(array_right),arr,length);

}


/*
    print_array(array_left);
    printf("\n");
    print_array(array_right);
    printf("\n");
*/
