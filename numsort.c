#include<stdio.h>
#include<math.h>
void main()
{
    long int num,sm,i,dig=0,d[7];
    printf("Enter an integer ");
    scanf("%ld",&num);
	for(i=num;i>0;i/=10)
	{
		d[dig]=i%10;
		dig++;	
	}
	sm=a[0];
	for(i=1;i<dig;i++)
	{
		if(
