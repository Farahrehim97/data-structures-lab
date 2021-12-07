#include<stdio.h>
#include<stdlib.h>

struct node 
{
	int data;
	struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;

void enqueue(int d)
{
	struct node *newnode,*temp;
	newnode =(struct node *)malloc(sizeof(struct node));
    	newnode->next = NULL;
   	newnode->data = d;
	if(rear==NULL && front ==NULL)
	{
		front=rear=newnode;
	}
	else{
		rear->next=newnode;
		rear=newnode;
		rear->next=NULL;
		printf("%d\n ",rear->data);
		printf("%d \n",front->data);
	}
		
}
void dequeue()
{
	struct node *temp;
	if(rear==NULL || front > rear)
		printf("queue is empty");
	else
	{
		temp=front;
		front=front->next;
		printf("deleted element is %d ",temp->data);
		
		free(temp);
		
	}
	if(front>rear)
		front=rear=NULL;

}
void display()
{
	struct node *temp;

		temp=front;
		while(temp!=NULL)
		{
			printf("%d ",temp->data);
			temp=temp->next;
		
		}
	
}
void peek()
{
	

}

void main()
{
	int ch,d;
	while(1){
	printf("Menu\n1.Enqueue\n2.Dequeue\n3.Peek\n4.Display\nEnter your choice");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:  printf("Enter data to be inserted ");
		        scanf("%d",&d); 
			enqueue(d);
			break;
		case 2: dequeue();
			break;
		case 3: peek();
			break;
		case 4: 
			display();
			break;
		case 5: exit(0);
			break;
	}
	}
}

