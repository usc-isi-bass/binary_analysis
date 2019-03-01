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

int f(int a,int min)
{
	int result=1,i;
	if(a<min)
		return 0;
	else
	{
		for(i=min;i<=a;i++)
		{
			if(a%i==0)
			{
				
				result+=f(a/i,i);
				
			}
		}
		return result;
	}
}
int main()
{
	int n,a,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		printf("%d\n",f(a,2));
	}
	return 0;

}