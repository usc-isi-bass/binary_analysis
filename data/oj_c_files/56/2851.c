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
	int n,i,o;
	scanf("%d",&n);
	int x[100];
	for(i=1;i<100;i++)
	{
		x[i-1]=n%10;
		n=(n-n%10)/10;
		if(n==0)
		{
			break;
		}
	}
	for(o=1;o<=i;o++)
	{
		printf("%d",x[o-1]);
	}
	return 0;
}
