#include<stdio.h>
void main()
{
    long int num,sort=0;
	int i,dig=0,d[7],j,temp;
    printf("Enter an integer ");
    scanf("%ld",&num);
	for(i=num;i>0;i/=10)
	{
		d[dig]=i%10;
		dig++;	
	}
	
	for(j=0;j<dig-1;j++)
	{
		for(i=j+1;i<dig;i++)
		{
			if(d[i]<d[j])
			{
				temp=d[i];
				d[i]=d[j];
				d[j]=temp;
			}
		}
	}	
	for(i=0;i<dig;i++)
		sort=sort*10+d[i];
	printf("\n%ld",sort);
}
			
