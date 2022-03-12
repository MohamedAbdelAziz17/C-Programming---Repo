#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
//pointer to arrays
//pointer to array of functions


#define stack_size 5

typedef struct st
{
    int array[stack_size];
    int top;
}stack;

void create_stack(stack* p)
{
    /* initialize top */
    p -> top = -1;
}

bool stack_push (stack *p , int data)
{
    /*check if top out of array boundry*/
    if(p -> top == (stack_size-1))
    {   
        printf("Stack is full");
        return false;
    }
    else
    {   /*increment then push data*/
        p -> top += 1;

        p->array[p->top] = data;

        return true;
    }
    
}

int stack_pop (stack* p)
{
    int data = 0;

    if(p->top == -1)
    {
        printf("stack is empty");
    }
    else
    {
        /*pop data then decrement*/
        data = p->array[p->top];

        p->top --;

        return data;

    }
    


}


int main()
{

    stack stc;
    bool check_stack = false;

    create_stack( &stc );

    check_stack = stack_push (&stc , 10);

    check_stack = stack_push (&stc , 20);


    return 0;
}

