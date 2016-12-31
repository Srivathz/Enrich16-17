#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];
	int i,k=40,l,ch[20],flag=1,m=0,j,even=0,odd=0;
	printf("Enter the string: ");
	gets(str);
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(str[i]==str[j])	
			{
				flag++;
				str[j]=k;
				k++;
			}
		}
		if(((str[i]>64)&&(str[i]<91))||((str[i]>96 )&&(str[i]<123)))
		{
			ch[m]=flag;
			m++;	
			flag=1;
		}
	}
	for(i=0;i<m;i++)
	{
		if(ch[i]>1)
		{	
			if(ch[i]%2==0)
				even++;
			else
				odd++;
		}
		else if(ch[i]==1)
			odd++;
	}
	if((odd==0)||(odd==1))
		printf("\nTrue");
	else
		printf("\nFalse");
}
