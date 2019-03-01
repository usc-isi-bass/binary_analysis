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

main()
{
	int n,k,i,j=1,t;
	scanf("%d %d",&n,&k);
	for(i=1;;i++)
	{  j=1;t=i*n+k;
	   while(j<n)
	   {
	   if(t%(n-1)!=0&&t>=(n-1)) break;
	   else if(t%(n-1)==0&&t<(n-1)) break; 
	   else t=t/(n-1)*n+k;j++;
	   } if(j>=n) break;
	} printf("%d\n",t);
}
