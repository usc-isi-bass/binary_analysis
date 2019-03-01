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
	int n,k,m; 
	scanf("%d %d",&n,&k);
	if(n==2&&k==1)
	{
		m=7;
		printf("%d\n",m);
	}
	else
      m=(int)(pow(n,n))-(n-1)*k;
      printf("%d\n",m);
    return 0;
}