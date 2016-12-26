//# To print sum of digits
#include<stdio.h>

void main()
{
    int num,sum=0,dig=0,i,t;
    printf("Enter a number");
    scanf("%d",&num);
    for(i=num;i>0;i/=10)
    {
        t=i%10;
        sum+=t;
        dig++;
    }
    printf("\n Digits=%d \n Sum of digits=%d",dig,sum);
}    
