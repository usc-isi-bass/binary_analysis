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

int main()
{
	int Z[100],n,m,i;
	int *p;
	p=Z;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{scanf("%d",&Z[i]);}
	for(i=0;i<m;i++)
	{printf("%d ",*(p+n-m+i));}
	for(i=0;i<n-m;i++)
	{printf("%d",*(p+i));if(i<n-m-1) printf(" ");}
	return 0;
}
