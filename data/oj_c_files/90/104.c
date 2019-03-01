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
	int f(int m,int n);
	int k,i,m,w,n;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
    	scanf("%d %d",&m,&n);
		w=f(m,n);
	    printf("%d\n",w);
	}
}
    int f(int m,int n)
	{
		if(m==0||n==1)
		{
			return(1);
		}
		if(m<n)
		{
			return f(m,m);
		}
	    else
		{
			return f(m,n-1)+f(m-n,n);
		}
	} 
