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

int su(int n)
{
	int i,l;
	l=sqrt(n);
	for (i=2;i<=l;i++) if (n%i==0) return(0);
	return(1);
}
void main()
{
	int n,i;
	scanf("%d",&n);
	for (i=3;i<=n/2;i++)
	{
		if (i%2!=0&&(n-i)%2!=0&&su(i)&&su(n-i)) printf("%d %d\n",i,n-i);
	}
}