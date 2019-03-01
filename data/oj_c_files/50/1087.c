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
	int day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int n,i,j,x;
	scanf("%d",&n);
	for(i=0;i<12;i++)
	{
		x=n;
		j=0;
		while(j<i+1)
		{
			x+=day[j];
			j++;
		}
		x+=12;
		if(x%7==5)printf("%d\n",i+1);
	}


	


     return 0;
}


