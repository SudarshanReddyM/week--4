#include "stack.h"
void push(int x[],int *a,int *top)

{	int b;
	
	if(*top==(*a)-1)
		printf("\n stack is full\n");
	else	
	{
		printf("enter number:\n");
		scanf("%d",&b);
		(*top)++;
		x[*top]=b;
	}
}

void pop(int x[],int a,int *top)
{
	if(*top==-1)
		printf("Stack is empty\n");
	else{
		printf("popped element:%d\n",x[*top]);
		(*top)--;
	}
}


void peek(int x[],int a,int *top)
{
	if(*top==-1)
	{
		printf("stack is empty\n");
	}
	else{
		printf("Peek element:%d\n",x[*top]);
	}
}
