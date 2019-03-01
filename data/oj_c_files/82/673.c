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
	int a,b,n;
	int i=1,h=0,t=0;
	scanf("%d",&n);
	while(i<=n)
	{
		scanf("%d %d",&a,&b);
		i=i+1;
		if(a>=90&&a<=140&&b>=60&&b<=90)
		{
			h=h+1;
			if(h>=t)
				t=h;
		}
		else if(h>=t)
		{
			t=h;
			h=0;
		}
		else
		{
			t=t;
			h=0;
		}
	}
	printf("%d",t);
	return 0;
}
