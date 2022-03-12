#include <stdio.h>
#include <stdlib.h>
int temp;
#define swap(a,b)   temp = a;\
                    a    = b;\
                    b    = temp

#define arraylength(array)          sizeof(array)/sizeof(int)


#define print_array(array)          for(int index = 0;index<arraylength(array);index++)\
                                    printf("%d",array[index])

    int binary_search(int*,int,int);
int main()
{
    int sensor_data[] = {1,2,3,4,5,6,7};

    int check = binary_search(sensor_data, arraylength(sensor_data),7);

    if(check)
        printf("found");
    else
        printf("not found");


    return 0;

}


int binary_search(int* arr,int length,int req_num){

    int mid, low=0, high=length-1;



    while(low <= high){     // if high < low --> means you searched on all elements so get out of loop
        mid = (low + high)/2;

        if(arr[mid] == req_num){
            return 1;
        }

        else if(arr[mid] > req_num){
            high = mid-1;
            }

        else{
        low = mid+1;
        }
    }


    return 0;

    // O(log(n))
}
