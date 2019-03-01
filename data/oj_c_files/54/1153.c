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
	int apple(int m,int n,int k);
	int m,n,k,i;
	scanf("%d%d",&n,&k);
	for(i=1;;i++)
	{
		m=i;
		m=apple(m,n,k);
		if(m!=0){printf("%d\n",m);break;}
	}
}
int apple(int m,int n,int k)
{
	int j;
	for(j=1;j<=n;j++)
	{
		if(m%(n-1)==0)m=m*n/(n-1)+k;
		else{m=0;break;}
	}
	return(m);
}