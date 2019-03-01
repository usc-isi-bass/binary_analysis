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

void main()
{
	int n,i,j,k,col,row;
	int *p[1000];
	for(i=0;i<1000;i++)
	{p[i]=(int *)malloc(10000*sizeof(int));}
	scanf("%d %d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",(*(p+i)+j));
		}
	}
	if(col>row)
	{
    for(i=0;i<col;i++)
	{
	for(j=0;j<=i;j++)
	{
		if(j<row)
		{printf("%d\n",*(*(p+j)+i-j));}
		else
		{break;}
	}
	}
	 for(i=0;i<row;i++)
	{
	for(j=0;j<row;j++)
	{
		if(j+i+1<row)
		{printf("%d\n",*(*(p+j+i+1)+col-j-1));}
		else
		{break;}
	}
	}
	}
	else
	{
    for(i=0;i<col;i++)
	{
	for(j=0;j<=i;j++)
	{
		if(j<row)
		{printf("%d\n",*(*(p+j)+i-j));}
		else
		{break;}
	}
	}
	 for(i=0;i<row;i++)
	{
	for(j=0;j<col;j++)
	{
		if(j+i+1<row)
		{printf("%d\n",*(*(p+j+i+1)+col-j-1));}
		else
		{break;}
	}
	}
	}
}
    