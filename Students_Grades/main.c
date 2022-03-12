#include <stdio.h>
#include <stdlib.h>
/*
A teacher faces a problem with the large number of students in his class,
 so it’s very hard to classify the student based
on their grades who will be passed to the next semester and who won’t.
So for example if we have the students data base as an array of 10 structs
 each struct represent info for each student, his ID and his Grade.
We need to develop the function:
“DB_Classification” that takes an unsorted array of structs with any size,
 and searches for the students who will not be passed if their Grades are less than (50) and print their IDs.
*/

struct Student{
unsigned int id;
unsigned char grade;
};

#define size 30    // size of array

void DB_Classification(struct Student *objects){
//code
printf("Students won't pass:");
for(int i=0;i<size;i++){
    if(objects[i].grade<50)
        printf("\nID: %d , Grade: %d \t(element: %d)",objects[i].id,objects[i].grade,i);
  }

};

int main()
{
// create array of objects
struct Student array[size];

// assigning values to id & grade...
for(int i=0;i<size;i++){
    array[i].id=1000+i;
    array[i].grade=(rand()%100)+1; // random numbers from 1 to 100..
}

// passing the array by reference
DB_Classification(array);

return 0;
}
