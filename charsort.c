#include<stdio.h>
#include<string.h>

void main()
{
	char arr[10][8],temp[8];
	int n,i,j;
	printf("Enter the number of elements in the array :");
	scanf("%d",&n);
	printf("\nEnter the elements of the array : ");
	for(i=0;i<=n;i++)
	{
		gets(arr[i]);
	}

	for(i=0;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(strlen(arr[j])<strlen(arr[i]))			//compares no. of digits
			{
				strcpy(temp,arr[i]);
				strcpy(arr[i],arr[j]);
				strcpy(arr[j],temp);
			}
			else if(strlen(arr[j])==strlen(arr[i]))			//compares numbers of strings with equal digits
			{
				if(strcmp(arr[i],arr[j])>0)
				{
					strcpy(temp,arr[i]);
					strcpy(arr[i],arr[j]);
					strcpy(arr[j],temp);
				}
			}
		}
	}
	
	printf("\nThe ordered array is:");
	for(i=0;i<=n;i++)
	{
		printf("\n %s",arr[i]);
	}
}
