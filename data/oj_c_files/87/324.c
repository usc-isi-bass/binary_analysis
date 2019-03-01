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
    int a,b,c,d,e,i,f,m;
	for(i=0;;i++)
	{
	    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0)
		{
			break;
		}
		else{
			m=0;
			m=60-c+f;
			m=m+e*60+(60-b-1)*60;
			m=m+(d+11-a)*3600;
		}
		printf("%d\n",m);
	}


	return 0;
}