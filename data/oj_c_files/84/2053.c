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


int main(int argc, char* argv[])
{
	int k,i=2,a,b,n,m;
	scanf("%d\n%d",&k,&m);
         a=m;
	b=m;
	while(i<=k)
	{
		scanf("%d",&n);
		if(n>a)
		{
			a=n;
		}
                  if(n<a&&n>b)
                  {
                           b=n;
                  }
		i++;
	}
	
	printf("%d\n%d\n",a,b);
	
	return 0;
}

