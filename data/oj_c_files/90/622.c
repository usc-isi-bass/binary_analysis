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

int move(int m,int n)
{
	if(m==1||m==0||n==1)
		return(1);
	else if(m<n&&m!=0)
		return(move(m,m));
	else
	{
		int k=0,i;
		for(i=0;i<n;i++)
			k=k+move(m-n+i,n-i);
		return(k);
	}
}
main()
{
	int i,t;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		int m,n;
		scanf("%d %d",&m,&n);
		printf("%d\n",move(m,n));
	}
}