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
	int n,m[10000],i,j,x[10000],z=0,h=1;
	scanf("%d\n",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&x[i-1]);
	m[0]=x[0];
	for(i=2;i<=n;i++)
	   {z=0;
		for(j=1;j<=i-1;j++)
	       if(x[j-1]==x[i-1])
			   z=1;
	    if(z==0) {m[h]=x[i-1];
		             h=h+1;}
	   }
	for(i=0;i<=h-1;i++)
	{printf("%d",m[i]);
	if(i!=h-1) printf(" ");}

	return 0;
	
}
