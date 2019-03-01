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
	int n;
	scanf("%d", &n);
	int t=0, s=0, m=0;
	for(int i=1;i<=n;i++)
	{
		m=s=i;
		if(m%7==0)
		{
			t=t;
		}
		else
		{
			m/=10;
			if(m==7)
			{
				t=t;
			}
			else if((s-m*10)==7)
			{
				t=t;
			}
			else
			{
				t+=s*s;
			}
		}
	}
		printf("%d\n", t);
	    return 0;
}