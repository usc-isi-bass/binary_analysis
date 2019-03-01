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
	int m,i,j;
	int a[6]={100,50,20,10,5,1};
	int b[6]={0};
	scanf("%d",&m);
	for(i=0;i<=5;i++)
	{
		for(j=1;m>=a[i];j++)
		{
			m=m-a[i];
			b[i]++;
		}
	}
    for(i=0;i<=5;i++)
	{
		printf("%d\n",b[i]);
	}
	return 0;
}