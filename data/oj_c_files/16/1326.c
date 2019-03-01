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
	int n,i,s=0,a,b;
	scanf("%d",&n);
    if(n%10==0) 
       {
       	if(n==0) printf("");
        else
        {printf("0");
	for(n=n/10;n%10==0;n=n/10)
	   {printf("0");}
	for(;n>=1;n=n/10)
	{
	i=n%10;
	s=s*10+i;
	}
	}
}
	else
		for(;n>=1;n=n/10)
	{
	i=n%10;
	s=s*10+i;
	}
	printf("%d",s);
return 0;
}