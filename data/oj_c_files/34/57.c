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

void pr(int n)
{ 
    int z;
	if(n%2==0)
	{
		z=n/2;
		printf("%d/2=%d\n",n,z);
	}
	else
	{
		z=3*n+1;
        printf("%d*3+1=%d\n",n,z);
	}
}
int jg(int n)
{
	int z;
	if(n%2==0)
	{
		z=n/2;
		return (z);
	}
	else
	{
		z=3*n+1;
        return (z);
	}
}
int main()
{
   int n;
   scanf("%d",&n);
   while(n!=1)
   {
	   pr(n);
	   n=jg(n);
   }
   printf("End\n");
   return 0;
}