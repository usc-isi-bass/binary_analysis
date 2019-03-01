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
	int t,m,n,i;
	int way(int x,int y);
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
        scanf("%d %d",&m,&n);
		printf("%d\n",way(m,n));
	}
}
int way(int x,int y)
{
	int m,n;
	m=x;n=y;
	if(x==1||y==1||x==0)
		return(1);
	else if(x<y)
		return(way(x,x));
	else
		return(way(x-y,y)+way(x,y-1));
}



	