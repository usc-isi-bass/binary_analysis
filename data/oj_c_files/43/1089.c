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
	int m,i,j,k,n,a,b,x,y;
	scanf("%d",&m);
	for(i=3;i<=m/2;i++)
	{a=0;b=0;
	n=sqrt(i)+1;
    x=sqrt(m-i)+1;
	for(k=2;k<=n&&k!=i;k++)
	{if(i%k==0)
	a=a-1;
	}
	for(k=2;k<=x&&k!=(m-i);k++)
	{if((m-i)%k==0)
	b=b-1;
	}
	if(a==0&&b==0)
		printf("%d %d\n",i,m-i);
	}
	return 0;
}

