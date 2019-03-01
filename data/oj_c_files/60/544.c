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

int su(long n)
{
	long i,j,k,l;
	l=sqrt(n);
	k=0;
	for(i=2;i<=l;i++) if (n%i==0) {k=1;break;}
	if (k) return(0); else return(1);
}
void main()
{
	long a,b,c,d,i,j,k,l,m,n;
	scanf("%ld",&n);
	if (n<=4) {printf("empty");exit(1);}
	for (i=3;i<=n-2;i++)
	{
		if (su(i)+su(i+2)==2) printf("%ld %ld\n",i,i+2);
	}
}