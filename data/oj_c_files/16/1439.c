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
	int t,a[10],m,i;
	scanf("%d",&t);
    for(i=0;i<=4;i++)
	{
		a[i]=t%10;
		t=t/10;
	}
	for(i=4;i>=0;i--)
	{
        if(a[i]!=0)
		{
			m=i;break;
		}
	}
	for(i=0;i<=m;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}