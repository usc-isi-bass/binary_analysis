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
	int x,i,y,j,k,l;
    int xn[15],yn[15];
	scanf("%d%d",&x,&y);
	for (i=0;x!=0;i++)
	{
		xn[i]=x;
		x=x/2;
	}
	k=i-1;
	for(i=0;y!=0;i++)
	{
		yn[i]=y;
		y=y/2;
	}
	l=i-1;
	if(xn[0]==yn[0])
		printf("%d",xn[0]);
	else
	{
	for(;;k--)
	{
		if(xn[k]!=yn[l])
		{
			j=k+1;
			break;
		}
		l--;
	}
	printf("%d",xn[j]);
	}



}