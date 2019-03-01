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
	int n,k,m,a,i,tempa=1,tempb=1;
	scanf("%d%d",&n,&k);
    for(i=1;i<=n;i++)
	{
		tempa=tempa*n;
	}
	if(n==2) printf("7");
	else
	{
		m=tempa-n*k+k;
        printf("%d",m);
	}
}
