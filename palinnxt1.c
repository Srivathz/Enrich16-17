#include<stdio.h>
#include<math.h>

void main()
{
	int num,d=0,i,palin=0,dig[10],x;
    printf("Enter the number :");
    scanf("%d",&num);
    for(i=num;i>0;i/=10)
    {
        dig[d]=i%10;
        d++;
    }
    x=d/2;
    if(d%2==0)
    	i=0;
    else
		i=1;	
	if(dig[x+i]<dig[x-1])
    {
    	dig[x]++;
	}
	else if(dig[x+i]==dig[x-1])
	{
		if(dig[x+1+i]<=dig[x-2])
		{
			dig[x]++;
		}	
		else
		{
			dig[x-2]=dig[x+1+i];
		}	
	}

	for(i=d-1;i>=d/2;i--)
    {
        palin+=dig[i]*pow(10,i);
        if(i!=(d-1-i))
        {
			palin+=dig[i]*pow(10,d-1-i);
		}	
    }
    printf("\n The next Palindrome is :%d",palin);	
}
