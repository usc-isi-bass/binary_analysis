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
	int n,first,second=0;
	char a;
	scanf("%d",&first);
	while(scanf("%c",&a)&&a==',')
	{
		scanf("%d",&n);
		if(n>first)
		{
			second=first;
			first=n;
		}
		else if(n==first)
			second=second;
		else if(n>second)
			second=n;
	}
    if(second==0)
		    printf("No\n");
	else
		    printf("%d\n",second);
	return 0;
}