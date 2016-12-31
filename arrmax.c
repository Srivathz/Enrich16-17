#include<stdio.h>

void main()
{
	int a[20],n,s,count=0,i;
	printf("Enter the number of elements in array ");
	scanf("%d",&n);
	printf("\nEnter the elements of the sorted array ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number to count ");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		if(a[i]==s)
			count++;
	}
	printf("\n %d",count);
}
