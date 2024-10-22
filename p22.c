#include <stdio.h>
void main()
{
int stack[50],top=-1,a,ch,i,d,z=1,size;
void push(int a)
{
	if(top==size-1)
	{
	printf("stack over flow");
	}
	else{
		top++;
		stack[top]=a;
		printf("sucessfully pushed");
	}
}

void pop(){
	if(top==-1)
	{
		printf("stack underflow");
	}
	else{
		d=stack[top];
		top--;
		printf("poped value is %d",d);
		
	}
}

void display(){
	if(top==-1)
	{
	    printf("stack is empty");
	}
	else
	{
		printf("stack elements are");
		for(i=0;i<=top;i++)
		{
		    printf("%d",stack[i]);
		}
	}
}
printf("enter the size of the stack");
scanf("%d",&size);
while(z=1)
{
    printf("select any option :\n  1 PUSH\n 2 POP\n 3 DISPLAY \n  4 BREAK ");
    scanf("%d",&ch);
		switch(ch){
			case 1:
			printf("\n Enter element to push");
			scanf("%d",&a);
				push(a);
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				break;
			default:
			printf("\nInvalid Operation! Try Again... \n");
			break;
		}
	}
	}
