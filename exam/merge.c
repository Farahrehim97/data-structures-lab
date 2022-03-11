// Date:11/03/22
// Write a program to merge two sorted array


#include<stdio.h>
int a[50],b[50],c[100],n,m,k;
int main()
{
	printf("\nEnter the number of elements in first array");
	scanf("%d",&m);
	printf("\nEnter the elements in first array(sorted)");
	for(int i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter the number of elements in second array");
	scanf("%d",&n);
	printf("\nEnter the elements in second array(sorted)");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("\nThe first array: ");
	for(int i=0;i<m;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nThe second array: ");
	for(int i=0;i<n;i++)
	{
		printf("%d ",b[i]);
	}
	int i=0,j=0,k=0;
	int n1=n;
	while((i<m) && (j<n))
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			k++;
			i++;
		}
		else if(a[i]==b[j])
		{
			c[k]=a[i];
			k++;
			i++;
			j++;
			n1--;
		}
		else
		{
			c[k]=b[j];
			k++;
			j++;
		}
	}
	while(i<m)
	{
		c[k++]=a[i++];
	}
	while(j<n)
	{
		c[k++]=b[j++];
	}
	printf("\nElements of merged array: ");
	for(int k=0;k<n1+m;k++)
	{
		printf("%d ",c[k]);
	}
	printf("\n");
	return 0;
}
