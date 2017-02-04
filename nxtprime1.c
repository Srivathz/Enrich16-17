#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int primecheck(int a);
int main()
{
    int num,mul,chk,flag;
    printf("Enter the number : ");
    scanf("%d",&num);
    mul=num/6;
    chk=(mul*6);
    if(chk<=num-1)
    
    do
    {
    	flag=primecheck(chk);
    	if(flag==0)
    	{
    		printf("\n The next prime is %d",chk);
    		break;
    	}
    	chk+=2;
    	flag=primecheck(chk);
    	if(flag==0)
       	{
    		printf("\n The next prime is %d",chk);
    		break;
    	}
    	chk+=4;
    }while(flag!=0);
    return 0;
}


int primecheck(int a)
{
	int lim,den,mul=1;
	if(a%2==0)
		return 1;
	else if(a%3==0)
		return 1;
	lim=a/2;
	do
	{
		den=(mul*6)-1;
		if(a%den==0)
			return 1;
		den+=2;
		if(a%den==0)
			return 1;
		mul++;
	}while(den<lim);
	
	return 0;
}
