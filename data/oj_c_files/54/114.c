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

int e;
int cs(int i,int n,int m)
{
if (e==0) return(1);
else
	{
	if (i%n==m&&i>n) {e--;return(cs(i/n*(n-1),n,m));}
	else return(0);
	}
}

void main()
{
int n,m,i;
scanf("%d %d",&n,&m);

for(i=1;;i++)
	{e=n;
	if (cs(i,n,m)==1) {printf("%d",i);break;}
	}
}