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
	int i,j;
	for(i=0;i<n;i++)
	{
		int m,time=60;
		scanf("%d",&m);
		for(j=0;j<m;j++)
		{
			int a;
			scanf("%d",&a);
			if(a<(time-3))
			{
			    time -= 3;
			}
			else if(a==(time-3))
			{
				time = a+1;
			}
			else if(a>(time-3)&&a<=time)
			{
				time=a;
			}
		}
			printf("%d\n",time);
	}
	return 0;
}

