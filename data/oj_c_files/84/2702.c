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
	int n,i,a,b,c;
	scanf("%d",&n);
	scanf("%d %d",&a,&b);
	if(b>a)
			c=b,b=a,a=c;
	for(i=1;i<=(n-2);i++)
	{
	    scanf("%d",&c);
		if(c>a) b=a,a=c;
		else if(c>b) b=c;
	}
	printf("%d\n%d\n",a,b);	
}