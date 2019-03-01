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
	int n,a=0,b=0;
	while(scanf("%d,",&n)!=EOF)
	{
                                 if(n>a)
                                 {b=a;a=n;}
                                 else if(n<a)
                                 if(n>b)
                                 b=n;
                                 }	
   if(b==0)
   printf("No");
   else printf("%d",b);
}