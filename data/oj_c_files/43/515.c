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

int a[A]={0};
int main()
{
    int n,i,s,j;
	scanf("%d",&n);
    for(i=2;i<A;i++)
	{
		if(a[i]==0)
		{
			for(j=i<<1;j<A;j+=i)
			{
				a[j]=1;
			}
		}
	}
	for(i=3;i<=n/2;i+=2)
	{
		if(a[i]==0)
		{
			if(a[n-i]==0) printf("%d %d\n",i,n-i);
		}
	}
	return 0;	
	
}
	
