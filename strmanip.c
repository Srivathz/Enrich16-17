#include<stdio.h>

void main()
{
    char str[100],mod[100];
    int i,j,k=0;
    printf("Enter a string");
    gets(str);
    j=strlen(str);
    for(i=0;i<j;i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]==' '||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U');
        else
        {
            if(((str[i]>64)&&(str[i]<91))||((str[i]>96 )&&(str[i]<123))) 
            {
                mod[k]=str[i];
                k++;
            }   
        }    
    }
    mod[k]='\0';
    printf("\n%s",mod);    
}
