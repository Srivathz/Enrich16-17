#include<stdio.h>
#include<stdlib.h>

void main()
{
	int i,j,temp=1,row,col;
	char op,a[4][4];
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			a[i][j]=temp++;
		}
	}
	a[3][3]=32;
	row=3;
	col=3;
	do
	{
		system("cls");
		for(i=0;i<4;i++)
		{
			printf("\n------------------------------\n");
			{
				for(j=0;j<4;j++)
				{
					if(a[i][j]==32)
					{
						printf("|%c\t",a[i][j]);
					}
					else
					{
						printf("|%d\t",a[i][j]);
					}
				}
			}
		}
		printf("\n Press U->up, D->down, L->left, R->right, Q->quit\nEnter a character\n");
		scanf("%c",&op);
		switch(op)
		{
			case 85:
			case 117:
				if(row>0)
				{
					temp=a[row][col];
					a[row][col]=a[row-1][col];
					row--;
					a[row][col]=temp;
				}
				break;
			case 68:
			case 100:
				if(row<3)
				{
					temp=a[row][col];
					a[row][col]=a[row+1][col];
					row++;
					a[row][col]=temp;
				}
				break;
			case 76:
			case 108:
				if(col>0)
				{
					temp=a[row][col];
					a[row][col]=a[row][col-1];
					col--;
					a[row][col]=temp;
				}
				break;	
			case 82:
			case 114:
				if(col<3)
				{
					temp=a[row][col];
					a[row][col]=a[row][col+1];
					col++;
					a[row][col]=temp;
				}
				break;	
			case 81:
			case 113:
				exit(0);	
		}
	}while(op!='q');
}
