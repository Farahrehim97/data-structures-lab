#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head= NULL;
void create(int data)
{
   
    struct node *temp,*newnode;
    newnode =(struct node *)malloc(sizeof(struct node));
    newnode->next = NULL;
    newnode->data = data;
    if(head==NULL)
    {
        head=temp=newnode;
    
    }
    else
    {
    	temp->next = newnode;
	temp=temp->next;
    }
   
}
void insertb(int data)
{
    struct node *temp,*newnode;
    newnode =(struct node *)malloc(sizeof(struct node));
    newnode->next = NULL;
    newnode->data = data;
    if(head==NULL)
    {
        head=temp=newnode;
    
    }
    else
    {
	newnode->next=head;
	head=newnode;
    }

}
void inserte(int data)
{
    struct node *temp,*newnode;
    newnode =(struct node *)malloc(sizeof(struct node));
    newnode->next = NULL;
    newnode->data = data;
    if(head==NULL)
    {
        head=temp=newnode;
    
    }
    else
    {	temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=newnode;
    }

}
void insertp(int data, int s)
{
    struct node *temp,*newnode;
    newnode =(struct node *)malloc(sizeof(struct node));
    newnode->next = NULL;
    newnode->data = data;
    if(head==NULL)
    {
        printf("The list is empty");
    
    }
    else
    {	temp=head;
	while(temp->next!=NULL)
	{
		if(temp->data==s)
		{
			newnode->next=temp->next;
			temp->next=newnode;
			
		}
		temp=temp->next;
	}
	
    }

}
void traverse()
{
    struct node *temp;
    if(head == NULL)
        printf("The list is empty");
    else
    {
	printf("The elements are: ");
        temp=head;
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
}
void deleteb()
{
	struct node *temp;
	if(head == NULL)
        printf("The list is empty");
	else
	{
	temp=head;
	head=head->next;
	printf("The deleted element is %d\n",temp->data);
	free(temp);
	}
}

void deleteend()
{
	struct node *temp, *pretemp;
	if(head == NULL)
        printf("The list is empty");
	else
	{
	  temp=head;
	  while(temp->next!=NULL)
	  {
		pretemp=temp;
		temp=temp->next;
	  }
	pretemp->next=NULL;
	printf("The deleted element is %d\n",temp->data);
	free(temp);	
	
	  
	}
}

void deletepos(int d)
{
	struct node *temp, *pretemp, *ptr;
	if(head == NULL)
        printf("The list is empty");
	else
	{
	  temp=head;
	  while(pretemp->data!=d)
	  {
		pretemp=temp;
		temp=temp->next;
	  }

          ptr=temp;
	  pretemp->next=temp->next;
	  printf("The deleted element is %d\n",temp->data);
	  free(ptr);
	}
}
int main()
{
    int ch,d,s,r;
    
    while(1)
    {
        printf("\n\nMenu 1.create 2.insert in beginning 3.insert in end 4.insert after a value 5.Delete from beginning 6.delete from last 7.detele after a position 8.display 9.exit\nEnter your choice ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("Enter data to be inserted ");
		    scanf("%d",&d);
		    create(d);
                    break;
            case 2: printf("Enter data to be inserted ");
		    scanf("%d",&d);
		    insertb(d);
                    break;
	    case 3: printf("Enter data to be inserted ");
		    scanf("%d",&d);
		    inserte(d);
		    break;
	    case 4: printf("Enter data to be searched ");
		    scanf("%d",&s);
		    printf("Enter data to be inserted ");
		    scanf("%d",&d);
		    insertp(d,s);
		    break;
	    case 5: deleteb();
		    break;
	    case 6: deleteend();
	            break;
	    case 7: printf("Enter data to be searched ");
		    scanf("%d",&s);
		    deletepos(s);
		    break;
	    case 8: traverse();
		    break;
	    case 9: exit(0);
		    break;
        }
    }
    return 0;
}

