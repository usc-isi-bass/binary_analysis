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
	int n,i,j=0;
	scanf("%d",&n);
	printf("\n");
	int a[100],b,c,sum=0;
	for(i=1;i<=n;i++)
	{b=i%10;
	c=(i-b)/10;
	if((i%7!=0)&&(b!=7)&&(c!=7))
		sum+=i*i;}
	printf("%d",sum);
	return 0;
}
