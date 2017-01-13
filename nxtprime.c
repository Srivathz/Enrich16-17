#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int num,i,prime[100],count=1,flag=0,j,x;
    printf("Enter the number : ");
    scanf("%d",&num);
    prime[0]=3;
    x=num+100;
    for(i=2;i<x;i++)
    {
        for(j=0;j<count;j++)
        {
            if(i%prime[j]==0)
            {
                flag=0;
                break;
            }
            else
            {
                flag=1;
            }
        }
        if(flag==1)
        {
            count++;
            prime[count]=i;
        }
        if(prime[count]>num)
        {
            printf("\nThe next prime number is : %d",prime[count]);
            exit(0);
        }
    }
    return 0;
}
