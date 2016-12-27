#include<stdio.h>
#include<stdlib.h>
void main()
{
    long int num,rev=0,i,d=0;
    printf("Enter an integer ");
    scanf("%ld",&num);
    i=abs(num);
    do
    {
        d=i%10;
        rev=rev*10+d;
        i/=10
    }while(i>0);
    if(num>0)
        printf("\n The reverse is: %ld",rev);
    else if(num<0)
        printf("\n The reverse is: -%ld",rev);
    else
        printf("\n The reverse is: 0");
}     
