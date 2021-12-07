#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head= NULL;
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
int search(int d)
{
    struct node *temp;
    if(head == NULL)
        printf("The list is empty");
    else
    {
        temp=head;
        while(temp!=NULL)
        {
	    if(temp->data == d)
	    {
            	return(1);
	    }
            temp=temp->next;
        }
    }
	
}
void count()
{
    int count=0;
    struct node *temp;
    if(head == NULL)
        printf("The list is empty");
    else
    {
        temp=head;
        while(temp!=NULL)
        {
	    count++;
            temp=temp->next;
        }
	printf("Number of elements in link list is %d \n",count);
    }
}
int main()
{
    int ch,d,r;
    
    while(1)
    {
        printf("\n\nMenu 1.insert 2.traverse 3.search 4.count 5.exit\nEnter your choice ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("Enter data to be inserted ");
		    scanf("%d",&d);
		    create(d);
                    break;
            case 2: traverse();
                    break;
	    case 3: printf("Enter data to be searched ");
		    scanf("%d",&d);
		    r=search(d);
		    if(r==1)
			printf("element found\n");
		    else
			printf("element not found\n");
		    break;
	    case 4: count();
		    break;
	    case 5: exit(0);
		    break;
        }
    }
    return 0;
}

