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
	int n, m, time=0, i, x, j, mark;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &m);
		if(m!=0)
		{
		for(j=1;j<m+1;j++)
		{
			scanf("%d", &x);
			if(time<60&&x+3*(j-1)>=60)
			{
				mark=60-3*(j-1);
			}
			if(time<60&&x+3*(j-1)<60&&x+3*(j-1)>57)
			{
				mark=x;
			}
			if(time<60&&x+3*j<60)
			{
				mark=60-j*3;
			}
			time=x+j*3;
		}
		}
		if(m==0)
		{
			mark=60;
		}
		printf("%d\n", mark);
	}
		return 0;
}