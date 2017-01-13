#include<stdio.h>
#include<stdlib.h>

int main()
{
	char *s={"Wish you a HAPPY PONGAL!!!"};
	int i;
	for(i=0;i<26;i++)
	{
		printf("%c",s[i]);
		delay(5000);
	}
}
