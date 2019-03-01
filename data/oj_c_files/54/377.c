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
	int i,j,k,n,t,r;
	scanf("%d%d",&n,&k);
    i=1;
	while(1)
	{i++;
	 j=0;
	 t=i;
	 r=1;
	while(r<=n)
	{if ((t-k)%n!=0||(t-k)==0) break;
	else {j=j+1;t=t-(t-k)/n-k;}
	r++;
	}
	if (j==n) {printf("%d",i);break;}
	}
}
	
