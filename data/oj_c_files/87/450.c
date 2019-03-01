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
	int a,b,c,d,e,f,n;
	scanf("%d",&a);
	while(a>0)
	{
		scanf("%d%d%d%d%d",&b,&c,&d,&e,&f);
	
         n=(d+12-a)*3600;
		 n=n+(e-b)*60;
		 n=n+f-c;
		 printf("%d\n",n);
		 scanf("%d",&a);
		 
	}
}