#include<stdio.h>
#include<stdlib.h>

int row,col;
void print(int arr[4][4]);
void move(int arr[4][4],char c);
char check(int arr[4][4],char c);

void main()
{
	int i,j,a[4][4],temp=1,random;
	char op;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			a[i][j]=temp++;
		}
	}
	
	for (i=0;i<4;i++)
	{   
		for(j=0;j<3;j++)
		{
			temp=a[i][j];
    		random=rand()%3;
	    	a[i][j]=a[j][random];
    		a[j][random]=temp;
    	}
	}
	
	do
	{
		system("cls");
		print(a);
		printf("\n Press U->up, D->down, L->left, R->right, Q->quit\nEnter a character\n");
		scanf("%c",&op);
		move(a,op);	
		op=check(a,op);
	}while(op!='Q');
}

void print(int arr[4][4])
{
	int i,j;
	for(i=0;i<4;i++)
	{
		printf("\n---------------------------------\n|");
		for(j=0;j<4;j++)
		{
			if(arr[i][j]==16)
			{
				printf(" \t|",arr[i][j]);
				row=i;
				col=j;
			}
			else
			{
				printf("%d\t|",arr[i][j]);
			}
		}
	}
}

void move(int arr[4][4],char c)
{
	switch(c)
	{
		case 'U':
		case 'u':
			if(row>0)
			{
				arr[row][col]=arr[row-1][col];
				arr[--row][col]=16;
			}
			break;
		case 'D':
		case 'd':
			if(row<3)
			{
				arr[row][col]=arr[row+1][col];
				arr[++row][col]=16;
			}
			break;
		case 'L':
		case 'l':
			if(col>0)
			{
				arr[row][col]=arr[row][col-1];
				arr[row][--col]=16;
			}
			break;	
		case 'R':
		case 'r':
			if(col<3)
			{
				arr[row][col]=arr[row][col+1];
				arr[row][++col]=16;
			}
			break;	
	}
}

char check(int arr[4][4],char c)
{
	int i,j,chk=1;
	if((c=='q')||(c=='Q'))
		return 'Q';
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(arr[i][j]==chk)
				chk++;
			else
				return 'A';				
		}
	}
	if(chk==17)
	{
		printf("\n\nCongrats!! You won!!");
		return 'Q';
	}
}
