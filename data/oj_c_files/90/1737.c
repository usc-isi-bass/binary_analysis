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

int xx(int m,int n)
{
	int x=0;
	if(m<0)x=0;
	else if(n==1||m==0)
		x+=1;
	else 
	x+=xx(m,n-1)+xx(m-n,n);
	return(x);
}
void main()
{
	int n,i,a,b;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&a,&b);
		printf("%d\n",xx(a,b));
	}
}