#include<stdio.h>
#include<stdlib.h>
#include "stack.h"
int main()
{
	int *p,n,ch,top=-1;
	printf("Enter size of stack: \n");
	scanf("%d",&n);
	
	p=(int *)malloc(n*4);
	
	
	
while(1)
{	printf("Enter choice:\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:{
					push(p,&n,&top);
					//printf("%d",top);
					break;}
		case 2:{
					pop(p,n,&top);
					break;}
		case 3:{
					peek(p,n,&top);
					break;}
		case 4:{
					exit(0);
					break;}
		default:{
					printf("Enter a valid choice\n");
					break;}
	}
}
free(p);
}
