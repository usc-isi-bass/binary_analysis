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

int sum(int m,int n,int k)
{int i,t;
for(i=0;i<n-1;i++)
{t=(m*n+k)/(n-1);
if (t*(n-1)==(m*n+k)) {m=t;}
else {m=0;break;}
}
return(m);
}

int main()
{
	int n,k;
	scanf("%d %d",&n,&k);
	int m;
	for(m=1; ;m++)
	{if (sum(m,n,k)!=0) {printf("%d",sum(m,n,k)*n+k);break;}
	else continue;
	}
	return 0;
}
