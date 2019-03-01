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
	int n,m,i,a,b;
          a=0;
          b=0;
	for(;;b++)
	{
		scanf("%d",&n);
		scanf("%d",&m);
		if(n==0 && m==0)
			break;
		for(i=2;i<=n; i++)
			a=(a+m)%i;
			printf("%d\n",a+1);
			a=0;
	}
return 0;
}