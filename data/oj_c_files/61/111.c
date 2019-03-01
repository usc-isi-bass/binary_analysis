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
    int i,n,j,t;
	int a[20]={1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181,6765};
   	int b[20];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&j);
	    b[i]=j-1;
	}
	for(i=0;i<n;i++)
	{
	t=b[i];
	printf("%d\n",a[t]);
	}
	return 0;
}