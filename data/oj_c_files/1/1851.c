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

int sum=0;
void f(int x,int y)
{
	if(x==1)
		sum++;
	while(y<=x)
	{
		if(x%y==0)
			f(x/y,y);
		y++;
	}
}
int main()
{
	int n,i,a;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a;
		int j=2,num=1;
		while(j<=a/2)
		{
			if(a%j==0)
			{
				sum=0;
				f(a/j,j);
				num+=sum;
			}
			j++;
		}
		printf("\n%d",num);
	}
	return 0;
}
