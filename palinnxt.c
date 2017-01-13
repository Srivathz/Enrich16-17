#include <stdio.h>
#include<math.h>

int main()
{
    int num,d=0,i,palin=0,dig[10],x;
    printf("Enter the number :");
    scanf("%d",&num);
    for(i=num;i>0;i/=10)
    {
        dig[d]=i%10;
        d++;
    }
    if(d%2==0)
        x=d/2;
    else
        x=(d/2)-1;
    for(i=x;i>=0;i--)
    {
        if(dig[d/2+1]<dig[i])
        {
            dig[d/2+1]+=1;
            break;
        }
    }
    for(i=d-1;i>=d/2;i--)
    {
        palin+=dig[i]*pow(10,i);
        if(i!=(d-1-i))
            palin+=dig[i]*pow(10,d-1-i);
    }
    printf("\n The next Palindrome is :%d",palin);
	return 0;
}
