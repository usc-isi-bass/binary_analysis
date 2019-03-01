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
	int n,a,b,i,t;
	scanf("%d%d%d%d",&n,&a,&b,&t);
	if(a>b){
		a = a;
		b = b;
	}
	else
	{
		t = a;
		a = b;
		b = t;
	};

    for(i=3;i<=n;i++)
    {
		int c;
		scanf("%d",&c);
    if(c>a&&c>b)
	{
		t = a;
		a = c;
		b = t;
	
	}
    else if(c<a&&c>b)
	{
		a = a;
		b = c;
	}
	else {
		a = a;
		b = b;
	};
	};
		printf("%d\n",a);
		printf("%d",b);
	
	return 0;
}
