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
	int n,k,apple,a,i,p;
	scanf("%d %d",&n,&k);
	for(a=1;;a++)
	{   p=0;
		apple=a*n+k;
	     for(i=1;i<=n-1;i++)
	     {
		    if(apple%(n-1)) break;
			else {apple=apple*n/(n-1)+k;p++;}
		 }
		 if(p==n-1) break;
	}
	printf("%d",apple);
	getchar();
	getchar();
}
