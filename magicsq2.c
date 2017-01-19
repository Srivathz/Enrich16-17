#include<stdio.h>
#include<stdlib.h>

void main()
{
	int i,j,row=1,col,a[4][4];
	char op;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			a[i][j]=row++;
		}
	}
	row=3;
	col=3;
	do
	{
		system("cls");
		for(i=0;i<4;i++)
		{
			printf("\n---------------------------------\n|");
			{
				for(j=0;j<4;j++)
				{
					if(a[i][j]==16)
					{
						printf(" \t|",a[i][j]);
					}
					else
					{
						printf("%d\t|",a[i][j]);
					}
				}
			}
		}
		printf("\n Press U->up, D->down, L->left, R->right, Q->quit\nEnter a character\n");
		scanf("%c",&op);
		switch(op)
		{
			case 'U':
			case 'u':
				if(row>0)
				{
					a[row][col]=a[row-1][col];
					a[--row][col]=16;
				}
				break;
			case 'D':
			case 'd':
				if(row<3)
				{
					a[row][col]=a[row+1][col];
					a[++row][col]=16;
				}
				break;
			case 'L':
			case 'l':
				if(col>0)
				{
					a[row][col]=a[row][col-1];
					a[row][--col]=16;
				}
				break;	
			case 'R':
			case 'r':
				if(col<3)
				{
					a[row][col]=a[row][col+1];
					a[row][++col]=16;
				}
				break;	
		}
	}while((op!='Q')&&(op!='q'));
}
