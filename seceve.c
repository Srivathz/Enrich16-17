#include<stdio.h>

void input_arr(int *arr,int lim);

void arr_sort(int *arr,int lim);

int sec_even(int *arr,int lim);


void main()
{
	int arr[10],n,eve;
	printf("Enter the number of elements in the array :");
	scanf("%d",&n);
	input_arr(arr,n);
	arr_sort(arr,n);
	eve=sec_even(arr,n);
	printf("\nThe second largest even number is: %d",eve);
}


void input_arr(int *arr,int lim)
{
	int i;
	printf("\nEnter the numbers: ");
	for(i=0;i<lim;i++)
	{
		scanf("%d",&arr[i]);
	}
}

void arr_sort(int *arr,int lim)
{
	int i,j,temp;
	for(i=0;i<lim-1;i++)
	{
		for(j=i+1;j<lim;j++)
		{
			if(arr[j]>arr[i])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}

int sec_even(int *arr,int lim)
{
	int i,count=0;
	for(i=0;i<lim;i++)
	{
		if(arr[i]%2==0)
		{
			count++;
		}
		if(count==2)
		{
			return arr[i];
			break;
		}
	}
}
