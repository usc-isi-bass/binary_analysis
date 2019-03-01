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
	int reverse (int n);
	int s[6]={0},z[6]={0},i;
    for (i=0;i<6;i++)
	{
		scanf("%d",&s[i]);
		z[i]=reverse (s[i]);
	    printf("%d\n",z[i]);
	}
return 0;
}
int reverse (int n)
{
	int z,t=0;
	if (n==0)
		z=0; 
	while(n!=0)
	{
        t=t*10+n%10;
        n=n/10;
	}
    if (n<0)
	{
		z=t*(-1);
	}else{
		z=t;
	}
		return z;
}
