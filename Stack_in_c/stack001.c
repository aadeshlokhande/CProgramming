#include<stdio.h>

// isFull :===> push
// isEmpty :====> pop
// true ==== 1 
// false ===> 0

struct stack
{
    int size;
    int top;
    int *arr;
};

int isFull(struct stack *ptr)
{
    if(ptr->top == ptr->size-1)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}

int isEmpty(struct stack *ptr)
{
    if(ptr->top == -1)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}


int main()
{
    struct stack S;
    S.size = 10;
    S.top = -1;
    S.arr = (int *)malloc(S.size * sizeof(int));
    
    
    return 0;
}

  