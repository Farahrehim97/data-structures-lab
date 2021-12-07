#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top= NULL;
struct node *head= NULL;
void push(int d)
{
	struct node *newnode,*temp;
	newnode =(struct node *)malloc(sizeof(struct node));
    	newnode->next = NULL;
   	newnode->data = d;
    	if(top==NULL)
    	{
       	 top=temp=head=newnode;
    
  	}
	else
	{
	   temp=head;
	   while(temp->next !=NULL)
	   {
		temp=temp->next;
	   }
      	   temp->next=newnode;
	   top=newnode;
	   printf("%d",top->data);
	}


}
void pop()
{
	struct node *pretemp,*temp;
	if(top==NULL)
    	{
       	 printf("\nStack is empty");
    
  	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
		{
			pretemp=temp;
			temp=temp->next;
		}
		pretemp->next=NULL;
		top=pretemp;
		
	}
}

void peek()
{

	if(top== NULL)
	{
		printf("\nstack is empty");
	}
	else
	{
		printf("\nTop value is %d \n",(top->data));
	}
}
void display()
{
	struct node *temp;
	if(top==NULL)
		printf("\nStack is empty \n");
	else
	{
		temp=head;
		while(temp!=NULL)
		{
			printf("%d ",temp->data);
			temp=temp->next;
		}
	}

}

void main()
{
	int ch,d;
	while(1)
	{
	printf("\nMenu\n1.Push\n2.Pop\n3.Top\n4.Display\n5.Exit\nEnter your choice");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1: printf("Enter data to be inserted ");
		        scanf("%d",&d);
			push(d);
			break;
		case 2: pop();
			break;
		case 3: peek();
			break;
		case 4: display();
			break;
		case 5:exit(0);
	}
	}
}

