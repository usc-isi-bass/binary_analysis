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
	int f(int n);
	int m,a=3,b;
	scanf("%d",&m);
	while(a<=(m/2))
	{
		if(f(a)==1)
		{
			b=m-a;
			if(f(b)==1)
			{
				printf("%d %d\n",a,b);
			}
		}
		a=a+2;
	}
}
int f(int n)
{
    int j;
	j=2;
	for(j=2;n%j!=0;j++);
    return (j>n/2?1:0); 
}
		        
