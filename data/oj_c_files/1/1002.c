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

int f(int a,int b)
{
	int i,p,q;
	for(i=b,p=0;i<=sqrt(a);i++)
	{
        if(a%i==0) 
		{
			q=f(a/i,i);
			p=p+q;
		}
	}
	p++;
	return(p);
}
void main()
{
	int i,a,n,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		k=f(a,2);
		printf("%d\n",k);
	}

}