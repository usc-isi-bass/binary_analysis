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

int main ()
{
	int i=1,m,n,t;
	scanf("%d",&t);
	int sort(int,int);
	while(i<=t)
	{
		int k;
		scanf("%d%d",&m,&n);
		k=sort(m,n);
		printf("%d\n",k);
	    i++;
	}
}
int sort(int x,int y)
{
	int z;
    if(y==1) return 1;
	else 
	{
		if(x>=y)
			return(sort(x,y-1)+sort(x-y,y));
		else 
			return(sort(x,y-1));
	}
	return z;
}