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
	int jiaogu(int m);
	int n;
	scanf("%d",&n);
	jiaogu(n);
	return 0;
}
int jiaogu(int m)
{
	int a1;
	if(m==1)
	printf("End");
	else if(m%2==1)
	{
		a1=m*3+1;
		printf("%d*3+1=%d\n",m,a1);
		return(jiaogu(a1));
	}
	else if(m%2==0)
	{
		a1=m/2;
		printf("%d/2=%d\n",m,a1);
		return(jiaogu(a1));
	}
}
