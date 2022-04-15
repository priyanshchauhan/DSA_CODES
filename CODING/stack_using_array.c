#include<stdio.h>
#include<stdlib.h>
int stack[40], i, j, choice, n, top=-1;
void push();
void pop();
void traverse();
void main(){
    printf("Enter the Number of elements you want to insert : ");
    scanf("%d", &n);
    
    while(1){
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        scanf("%d", &choice);
        
        switch(choice){
            case 1 :
            {
                push();
                break;
            }
            case 2 :
            {
                pop();
                break;
            }
            case 3 :
            {
                traverse();
                break;
            }
            case 4 :
            {
                break;
            }
        };
    }
}

void push()
{
    int x;
    if(top==n)
    printf("Overflow");
    
    else
    {
        printf("Enter the value : ");
        scanf("%d", &x);
        top+=1;
        stack[top]=x;
    }
}

void pop()
{
    if(top==-1)
    printf("Underflow");
    
    else
    top = top-1;
}
void traverse()
{
    for(i=top;i>=0;i--)
    {
        printf("%d \n", stack[i]);
    }
    
    if(top==-1)
    {
    printf("Stack is empty");
    }
}