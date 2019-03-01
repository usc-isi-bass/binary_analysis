#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct
{
	int file;
	int flag;
}map;
void main()
{
	map a[200][200];
	int count=0,i,j,col,row;
	char direction='d';
	for(i=1;i<=200;i++)
	{
		for(j=1;j<=200;j++)
		{
			a[i-1][j-1].flag=0;
		}
	}
	scanf("%d %d",&row,&col);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=col;j++)
		{
			scanf("%d",&a[i][j].file);
			a[i][j].flag=1;
		}
	}
	i=1;
	j=1;
	do
	{
		count++;
		switch(direction)
		{
		case'd':
			a[i][j].flag=0;
			if(a[i][j+1].flag==1)
			{
				printf("%d\n",a[i][j].file);
				j++;
			}
			else
			{
				printf("%d\n",a[i][j].file);
				direction='s';
				i++;
			}
			break;
		case's':
			a[i][j].flag=0;
			if(a[i+1][j].flag==1)
			{
				printf("%d\n",a[i][j].file);
				i++;
			}
			else
			{
				printf("%d\n",a[i][j].file);
				direction='a';
				j--;
			}
			break;
		case'a':
			a[i][j].flag=0;
			if(a[i][j-1].flag==1)
			{
				printf("%d\n",a[i][j].file);
				j--;
			}
			else
			{
				printf("%d\n",a[i][j].file);
				direction='w';
				i--;
			}
			break;
		case'w':
			a[i][j].flag=0;
			if(a[i-1][j].flag==1)
			{
				printf("%d\n",a[i][j].file);
				i--;
			}
			else
			{
				printf("%d\n",a[i][j].file);
				direction='d';
				j++;
			}
			break;
		default:
			break;
		}
	}while(count!=row*col);
}