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
	int x,y;
	int i,j,n,m;
	int rx[1000]={0},ry[1000]={0};

	scanf("%d %d",&x,&y);

	rx[0]=x;
	ry[0]=y;
	for(i=1;x!=0;i++)
	{
		x=x/2;
        rx[i]=x;
	}
	m=i-1;
	for(j=1;y!=0;j++)	
	{
		y=y/2;
	    ry[j]=y;
	}
	n=j-1;
	for(i=m-1,j=n-1;i>=0&&j>=0;i--,j--)
	{
		if(rx[i]!=ry[j])
			break;
	}
	
	printf("%d",rx[i+1]);
}