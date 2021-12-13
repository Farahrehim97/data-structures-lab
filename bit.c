#include<stdio.h>
#include<stdlib.h>
int u[20], a[20],b[20],ab[20],bb[20],un[20],in[20],n,m,p;
void create()
{
	int temp1,temp;
	printf("enter the no of elements in universal set");
	scanf("%d",&n);
	printf("enter the elements");
	for(int i=0;i<n;i++)
	{	
		scanf("%d",&u[i]);
	}
	printf("enter the no of elements in A set");
	scanf("%d",&m);
	printf("enter the elements");
	for(int i=0;i<m;i++)
	{	
		scanf("%d",&a[i]);
	}
	printf("enter the no of elements in B set");
	scanf("%d",&p);
	printf("enter the elements");
	for(int i=0;i<p;i++)
	{	
		scanf("%d",&b[i]);
	}
	for(int i=0;i<n;i++)
	{
		temp=u[i];
		for(int j=0;j<m;j++)
		{
			if(a[j]==temp)
			{
				ab[i]=1;
				break;
			}
			else
			{
				ab[i]=0;
			}
		}
		
	}
	for(int i=0;i<n;i++)
	{
		temp=u[i];
		for(int j=0;j<p;j++)
		{
			if(b[j]==temp)
			{
				bb[i]=1;
				break;
			}
			else
			{
				bb[i]=0;
			}
		}
		
	}
	printf("A elements ");
	for(int i=0;i<n;i++)
	{	
		printf("%d ",ab[i]);
	}
	printf("\nB elements ");
	for(int i=0;i<n;i++)
	{	
		printf("%d ",bb[i]);
	}
}

void inter()
{
	
	for(int i=0;i<n;i++)
	{
		in[i]=ab[i] & bb[i];
	
	}
	printf("\nintersection elements ");
	for(int i=0;i<n;i++)
	{	
		printf("%d ",in[i]);
	}
}
void unionbit()
{
	for(int i=0;i<n;i++)
	{
		un[i]=ab[i] || bb[i];
	
	}
	printf("\nunion elements ");
	for(int i=0;i<n;i++)
	{	
		printf("%d ",un[i]);
	}
}

void diff()
{
	int bb1[20];
	for(int i=0;i<n;i++)
	{
		if(bb[i]==1)
			bb1[i]=0;
		else
			bb1[i]=1;
	}
	printf("\nB compliment elements ");
	for(int j=0;j<n;j++)
	{
		printf("%d ",bb1[j]);
	}
	printf("\nA-B elements ");
	for(int j=0;j<n;j++)
	{
		printf("%d ",ab[j] & bb1[j]);
	}
	
}
void main()
{
	int ch;
	while(1){
	printf("\nMenu\n1.create elements 2.Union 3.Intersection 4.Difference 5.Exit Enter your choice");
	scanf("%d",&ch);

	switch(ch)
	{
		case 1: create();
			break;
		case 2: unionbit();
			break;
		case 3: inter();
			break;
		case 4: diff();
			break;
		case 5: exit(0);


	}
	}
}
