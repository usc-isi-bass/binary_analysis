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

	int m,n,i=0,j=0;
    double sum=0,a=2,b=1;
    scanf("%d",&m);
	for(j=0;j<m;j++)
	{ scanf("%d",&n);
	  for(i=0;i<n;i++)
	  { sum+=(a/b);
	    a+=b;
		b=a-b;
	  }
     printf("%.3lf\n",sum);
   a=2;
   b=1;
   sum=0;

	}
   

	return 0;
}