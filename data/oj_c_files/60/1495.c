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

int f(int x)
{
	int i,k=0;
	if(x>1)
	{
	for (i=1;i<=sqrt(x);i++)
	{
		if(x%i==0)
		k+=1;
	}
	if(k==1)
	return 1;
	else
	return 0;
    }
}
int main()
{
	int n,a,b;
    scanf("%d",&n);
    if(n<=4)
    printf("empty");
    else
    {  
		for(a=1;a<=n-2;a++)
		 {b=a+2;
        if(f(a)==1 && f(b)==1)
        printf("%d %d\n",a,b);
		      }
    }
}
