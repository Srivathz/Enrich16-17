#include<stdio.h>
#include<stdlib.h>
void main()
{
    long int num,rev=0,i,d=0;
    printf("Enter an integer ");
    scanf("%ld",&num);
    for(i=abs(num);i>0;i/=10)
    {
        d=i%10;
        rev=rev*10+d;
    }
    if(num>0)
        printf("\n The reverse is: %ld",rev);
    else if(num<0)
        printf("\n The reverse is: -%ld",rev);
    else
        printf("\n The reverse is: 0");
}     
