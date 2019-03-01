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

int prime(int x)
{ 
	int j;
	for(j=2;j<x;j++)
    { if(x%j==0)  return 0;  }
	              return 1;
}
int prime(int x);
main()
{
	int n,a,b,x;
	scanf("%d",&n);
	if(n<5)
    printf("empty");
    else
    for(x=2;x<=n-2;x++)
    {
		a=prime(x);
		b=prime(x+2);
		if(a&&b)
			printf("%d %d\n",x,(x+2));
	}
}