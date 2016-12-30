#include<stdio.h>
#include<string.h>

void main()
{
    char str[100],rev[100];
    int i,j;
    printf("Enter a string");
    gets(str);
    j=strlen(str);
    for(i=0;i<j;i++)
    	rev[i]=str[j-i-1];
    rev[i]='\0';
    if(strcmp(str,rev)==0)
        printf("\n The given string is a palindrome");
    else
        printf("\n The given string is not a palindrome");
}
