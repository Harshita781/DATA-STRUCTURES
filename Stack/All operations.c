#include<stdlib.h>
#include<stdlib.h>
#include<limits.h>

struct Stack{
    int top;
    int capacity;
    int *arr;
};

struct Stack *createStack(int capacity){
    struct Stack *S =malloc(sizeof(struct Stack));
    if(!S)
    return NULL;
S->capacity;
S->top=-1;
S->arr=malloc(S->capacity*sizeof(int));
if(!S->arr)
    return NULL;
return S;
};

int isEmpty(struct Stack *S)
{
    return(S->top==-1);
}

int size(struct Stack *S)
{
    return(S->top+1);
}

int isFull(struct Stack *S)
{
    return(S->top==S->capacity-1);
}

void push(struct Stack *S,int data)
{
    if(isFull(S))
    {
        printf("Stack Overflow\n");
    }
    else
    S->arr[++S->top]=data;

}

int pop(struct Stack *S)
{
    if(isEmpty(S))
        printf("Stack is Empty\n");
    else
       return(S->arr[S->top--]);
}

int peek(struct Stack *S)
{
    if(isEmpty(S))
    {
        printf("Stack is Empty\n");
        return INT_MIN;
    }
    else
        return(S->arr[S->top]);

}

void deleteStack(struct  Stack *S)
{
    if(S)
    {
        if(S->arr)
          free(S->arr);
          free(S);
    }
}

int main()
{
    int i=0, capacity=20;
    struct Stack *stk =createStack(capacity);
    for(i=0;i<capacity;i++)
    {
        push(stk,1);
    }
    printf("Top element is %d\n, peek(stk)");
    printf("Stack size is %d\n",size(stk));
    for(i=0;i<=capacity;i++)
    {
        printf("Popped element is %d\n",pop(stk));
    }
    if(isEmpty(stk))
        printf("Stack is empty\n");
    else
        printf("Stack is not empty\n");
    deleteStack(stk);
    return 0;
    }
