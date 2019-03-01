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

int fen(int m,int n)
{
	if(n==1||m==1)
	return 1;
	else if(n==0&&m==0)
	return 1;
	else if(m<0)
	return 0;
	else
	return fen(m,n-1)+fen(m-n,n);
}
main ()
{
	int t,m,n,i;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d %d",&m,&n);
		printf("%d\n",fen(m,n));
	}
}
		
	
	