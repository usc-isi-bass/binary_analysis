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

int main(int argc, char* argv[])
{
	int m,n,i;
	double a=1.0,b=1.0,c,sum=0.0;
	scanf("%d",&m);
	for(int j=0;j<m;j++)
	{
		scanf("%d",&n);
        a=1.0,b=1.0,c,sum=0.0;
	    for(i=1;i<=n;i++)
		{
	
		   a=a+b;
		   b=a-b;
	       c=a/b;
	       sum+=c;  
		}
       
		printf("%.3lf\n",sum);
	}
	    
	return 0;
}

