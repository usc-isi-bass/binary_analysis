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
	int a=1,n,k,i,m;
	scanf("%d%d",&n,&k);
	if(n==2)
	{
		m=7;
	printf("%d",m);
	}
	else{
	for(i=1;i<=n-1;){
		if((m*n+k)%(n-1)==0)
		{
			m=(m*n+k)/(n-1);
			i++;
		}
		else{
			a=a+1;
			m=a;
			i=1;
		}

	}
	m=n*m+k;
	printf("%d",m);
	}

}