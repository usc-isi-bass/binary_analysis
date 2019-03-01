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

int count;
void f(int a ,int b)
{
	int j;
	if(a==1)
		count+=1;
	else
	{
		for(j=b;j<=a;j++)
		{
			if(a%j==0)
				f(a/j,j);
		}
	}
}
int main()
{
	int n,i,number;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		count=0;
		scanf("%d",&number);
		f(number,2);
		printf("%d\n",count);
	}
	return 0;
}