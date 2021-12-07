#include<stdio.h>
#include<stdlib.h>
#define n 10
int front=-1,rear=-1, queue[n];
void insert();
int delete_element();
int peek();
void display();

int main()
{
	
	int ch,val;
	do{
	printf("\n\nMenu\n1.insert\n2.remove\n3.Peek(top in queue)\n4.display\n5.exit\nenter your choice");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:insert();
		       break;
		case 2:val=delete_element();
			printf("The deleted element is %d\n",val);
			break;
		case 3:val=peek();
			printf("The top element is %d\n",val);
			break;
		case 4:display();
			break;
		case 5: exit(0);

		default:printf("wrong choice");
	}
	}while(ch!=5);
return 0;
}

void insert()
{
	int x;
	printf("Enter the element to be inserted");
	scanf("%d",&x);
	if(rear==n-1)
		printf("Overflow\n");
	if((rear==-1) &&(front==-1))
	{
		rear=front=0;
	}
	else
	{	rear++;
		
	}
	queue[rear]=x;
}
int delete_element()
{
	int del;
	if(front==-1 || front>rear)
		printf("Underflow\n");
	else
	{
		del=queue[front];
		front++;	
	}	
	if(front>rear)
	{
		rear=front=-1;
	}
	return(del);
}
int peek()
{
	if(front==-1||front>rear)
	{
		printf("The queue is empty\n");
		return(-1);
	}
	else
		return(queue[front]);
}
void display()
{
	if(front==-1||front>rear)
		printf("queue is empty\n");
	else
	{
		for(int i=front;i<=rear;i++)
			printf("%d ",queue[i]);
	}
}

