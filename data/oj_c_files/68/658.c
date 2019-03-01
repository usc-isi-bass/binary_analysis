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

int ss(int x)
{
	int i,t;
	t=1;
	for(i=2;i<=sqrt(x);i++)
	{ if(x%i==0) {t=0;break;}}
	return(t);
}
main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=6;i<=n;i=i+2)
	{ for(j=3;j<=n/2;j++)
	{ if(ss(j)&&ss(i-j)) { printf("%d=%d+%d\n",i,j,i-j);break;}
	}
	}
}