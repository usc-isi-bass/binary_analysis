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

int s=0;
void f(int x,int y)
{
	int i,j,k;
	if(x==1)
		s++;
	else
	{
		for(;y<=x;y++)
		{
			if(x%y==0)
			{
				f(x/y,y);
			}
		}
	}
}
int main()
{
	int n,k,q,j;
	scanf("%d",&q);
	for(j=0;j<q;j++)
	{
		scanf("%d",&n);
		f(n,2);
		printf("%d\n",s);
		s=0;
	}
	return 0;
} 