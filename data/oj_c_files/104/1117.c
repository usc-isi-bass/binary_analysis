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
	void Hanshu(int a,int b);
	int a,b,k;
	scanf("%d %d",&a,&b);
	Hanshu(a,b);
	return 0;
}

void Hanshu(int a,int b)
{
	if(a==b) printf("%d",a);
	else if(a>b)
	{
		a=a/2;Hanshu(a,b);
	}
	else
	{
		b=b/2;Hanshu(a,b);
	}
}