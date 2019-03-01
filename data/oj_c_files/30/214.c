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
	int n,i,a[100],y;
	scanf("%d",&n);
	y=0;
	for(i=1;i<=n;i++)
		a[i]=i;
	for(i=1;i<=n;i++)
	{
		if(a[i]%7!=0&&(a[i]%10!=7&&a[i]/10!=7))
			y=y+a[i]*a[i];
	}
		printf("%d\n",y);
		return 0;
}                           
