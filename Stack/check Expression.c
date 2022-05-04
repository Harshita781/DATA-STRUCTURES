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

int matchSymbol(char a, char b)
{
    if(a=='[' && b==']')
    {
        return 1;
    }
    else if(a=='{' && b=='}')
    {
        return 1;
    }
    else if(a=='(' && b==')')
    {
        return 1;
    }
    return 0;
}

int checkExpression(char expression[])
{
    int count;
    char temp;
    struct Stack *stk=createStack(5);
    for(count=0;count< strlen(expression);count++)
    {
        if(expression[count]=='(' || expression[count]=='{' || expression[count]=='[')
        {
            push(stk,expression[count]);
        }
        if(expression[count]==')' || expression[count]=='}' || expression[count]==']')
        {
            if(isEmpty(stk)){
                printf("The right symbols are more than left symbols\n");
                return 0;
            }
        else {
            temp=pop(stk);
            if(!matchSymbol(temp,expression[count])){
                printf("The mismatched symbols are: \t%c and %c\n",temp,expression[count]);
                return 0;
            }
        }
    }
}

if(isEmpty(stk))
{
    printf("\nThe Expression has Balanced Parenthesis\n");
    return 1;
}

else{
    printf("The Expression has unbalanced parenthesis\n");
    return 0;
}
}

int main()
{
    int validity;
    validity = checkExpression("[a+(b*{d+2})]");
    if(validity==1)
        printf("The expression is valid\n");
    else{
        printf("The expression is invalid\n");
    }
    return 0;
}
