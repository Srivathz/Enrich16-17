#include<stdio.h>

void main()
{
    long int num,shift,rem;
    int m,i;
    printf("Enter a 5 digit number : ");
    scanf("%ld",&num);
    printf("\nNo. of times to rotate : ");
    scanf("%d",&m);
    if((num<10000)||(num>99999))
        printf("\n Not a 5 digit number");
    else
    {
        for(i=0;i<5-m;i++)
        { 
            rem=num%10;
            shift=num/10;
            num=(rem*10000)+shift;
        } 
        printf("\n %ld ",num);
    }
}
