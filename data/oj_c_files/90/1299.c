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

int sep(int m,int n)
{
	int c;
	if(n==1||m==0) c=1;
	else if(m<n) c=sep(m,m);
	else c=sep(m,n-1)+sep(m-n,n);
	return c;
}
int main()
{
	int a[20][2],t,i,j;
	scanf("%d",&t);
	for(i=0;i<t;i++) for(j=0;j<2;j++) scanf("%d",&a[i][j]);
	for(i=0;i<t;i++) printf("%d\n",sep(a[i][0],a[i][1]));
}
