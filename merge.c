#include<stdio.h>
int a[50],b[50];
void sort(int a[], int b[],int n,int m)
{
	int c[50],k=0,i=0,j=0;
	while(i<n && j<m)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			k++;i++;
		}
		else
		{
			c[k]=b[j];
			k++;j++;
		}
	}	
	while(i<n)
	{
		c[k++]=a[i++];
	}
	while(j<m)
	{
		c[k++]=b[j++];
	}
	
	printf("The sorted array is ");
	for(int i=0;i<n+m;i++)
	{
		printf("%d  ",c[i]);
	}

}

void main()
{
	int n,m;
	printf("enter the size of first array");
	scanf("%d",&n);
	printf("enter the size of second array");
	scanf("%d",&m);

	printf("enter the elements to be inserted in first array");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the elements to be inserted in second array");
	for(int i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	sort(a,b,n,m);

}

