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

int f(int m,int l)
{
	int re=0,j;
	if(l==4)
      re=1;
	if(l>4)
	{
		for(j=m;j<=sqrt(l);j++)
		{
			if(l%j==0)
			{
				re=re+1+f(j,l/j);
			}
		}
	}
	return re;
}
int main()
{
	int n,i,a[100]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",(f(2,a[i])+1));
	}

}


