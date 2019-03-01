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


int main(int argc, char* argv[])
{
	int n;
	scanf("%d",&n);
	int a,b;
	scanf("%d%d",&a,&b);
	int i;
	for(i=0;i<(n-2);i++)
	{
		int k;
		scanf("%d",&k);
		if(k>a)
		{
			b=a;
			a=k;
		}
		else if(k>b)
		{
			b=k;
		}
	}
	printf("%d\n",a);
    printf("%d\n",b);
	return 0;
}