#include <stdio.h>
#include <stdlib.h>

int temp;
#define swap(a,b)   temp = a;\
                    a    = b;\
                    b    = temp

#define arraylength(array)          sizeof(array)/sizeof(int)


#define print_array(array)          for(int index = 0;index<arraylength(array);index++)\
                                    printf("%d",array[index])


int linear_search(int *,int,int);

int main()
{
    int sensor_data[] = {7,6,4,9,8,2,3,1};

   int check = linear_search(sensor_data,arraylength(sensor_data),8);

    printf("%d",check);


    return 0;
}

int linear_search(int * arr,int length,int req_num){

for(int i = 0;i<length;i++){
    if(arr[i]==req_num)
        return 1;
}
return 0;

}
