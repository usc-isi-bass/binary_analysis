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
	int i,s,t,n,p,x,z;
	x=0;z=0;
	scanf("%d",&n);
	p=n*n;s=255;
	for(i=1;i<=p;i++)
	{   t=s; 
		scanf("%d",&s);if(s==0&&t==0) x+=1;if(s==0) z+=1;
	}
    z=(z-x-2)/2;x=x/2-1;
	x=x*z;
	printf("%d\n",x);


}
