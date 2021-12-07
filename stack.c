#include<stdio.h>
#define n 5
int top=-1,a[50];

void push(int b[])
{
	int x;
	printf("Enter the element to be inserted");
	scanf("%d",&x);
	if(top==n-1)
	{
		printf("Overflow\n");
	}
	else
	{	top++;
		b[top]=x;
	}
	display(b);
}
void pop(int b[])
{
	int x;
	
	if(top==-1)
	{
		printf("Underflow\n");
	}
	else
	{
		x=b[top];
		top--;
		printf("Removed element is %d \n",x);
		display(b);
	}

}
void topvalue(int b[])
{
	if(top==-1)
		printf("The stack is empty\n");
	else
		printf("%d",b[top]);

}	
void display(int b[])
{
	printf("The elements in array are: ");
	for(int i=top;i>=0;i--)
	{
		printf("%d ",b[i]);
	}
}

void main()
{
	int ch;
	printf("Enter the elements of the array");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		top++;
	}
	printf("Menu\n1.Push\n2.Pop\n3.Top\n4.Display\nEnter your choice");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: push(a);
			break;
		case 2: pop(a);
			break;
		case 3: topvalue(a);
			break;
		case 4: display(a);
			break;
	}			
}
