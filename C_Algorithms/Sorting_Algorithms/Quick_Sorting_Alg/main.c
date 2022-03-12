#include <stdio.h>
#include <stdlib.h>

int temp;
#define swap(a,b)   temp = a;\
                    a    = b;\
                    b    = temp

#define arraylength(array)         sizeof(array)/sizeof(int)


#define print_array(array)          for(int index = 0;index<arraylength(array);index++)\
                                    printf("%d",array[index])
void quick_sorting(int*,int,int);
int  partial_sort (int*,int,int);


int main()
{
    int sensor_data[]={7,2,1,3,8,6,4,5};

    quick_sorting(sensor_data,0,arraylength(sensor_data)-1);

    print_array(sensor_data);

    printf("\n answer:%x",-2<<2);




    return 0;
}







void quick_sorting(int* A,int low,int high){

    int ret_pivot_index=0;

if(low < high){

    ret_pivot_index=partial_sort(A,low,high);

    quick_sorting(A,low,ret_pivot_index-1);

    quick_sorting(A,ret_pivot_index+1,high);

}

} //quick_sorting



int  partial_sort (int* arr,int low,int high){
        int pivot = arr[high];
        int cmpr_ctr = low;
        int pIndex = high;

for(int j=low;j<high;j++){
        if(pivot>arr[j]){
            cmpr_ctr++;
            swap(arr[j],arr[cmpr_ctr-1]);
            }
    } //for

swap(arr[pIndex],arr[cmpr_ctr]);
        return cmpr_ctr;

} //partial_sort
