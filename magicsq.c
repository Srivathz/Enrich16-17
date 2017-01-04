#include<stdio.h>

void main()
{
    int a[11][11],i,j,n,r=0,count=1,c;
    printf("Enter the order of the magic square (positive odd number)");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            a[i][j]=0;
    }
    c=n/2;
    a[r][c]=1;
    for(i=1;i<(n*n);i++)
    {
        r-=1;
        c++;
        if(r<0)
            r=n-1;
        if(c==n)
            c=0;
        if(a[r][c]==0)
        {
            a[r][c]=++count;
        }
        else if(a[r][c]!=0)
        {
          r+=2;
          c--;
          if(r>n-1)
            r-=n;
          if(c<0)
            c=n-1;
          a[r][c]=++count;
        }
    }

    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
            printf("%d     ",a[i][j]);
    }
}
