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
	int n,i,a[5]={0};
	scanf("%d",&n);
	for(i=0;i<5;i++)
	{
		a[i]=n%10;
		n=n/10;
		if(n==0)
			break;
	}
	for(i=0;i<5;i++)
	{
		if(a[i]==0)
		    break;
		printf("%d",a[i]);
	}
	return 0;
}