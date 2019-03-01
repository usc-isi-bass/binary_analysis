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
	int a,b=0,c=0,d,i=0,n;
	scanf("%d",&n);

	for(i=0;i<n;i++)
{
		scanf("%d",&a);

	     if(a>c)
		 {
            c=a;
            
		 }
		    
	     if(b<c)
		 {
            d=b;
			b=c;
			c=d;
			d=0;
		 }
}
	 printf("%d\n%d",b,c);
	return 0;
}