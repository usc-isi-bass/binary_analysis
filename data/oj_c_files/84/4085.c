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
    int n,a,b,f=0,s;
	scanf("%d\n",&n);
    scanf("%d\n",&a);
	for(;100>n&&n>1;n--)
	{
		
		scanf("%d\n",&b);
		b=a>b?a:b;
	    if(f<=b)
		{	s=f;
			f=b;
		}
		   else
			   s=b>s?b:s;

		
	}
    printf("%d\n",f);
	printf("%d",s);

}
