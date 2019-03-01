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

void main()
{
	int n,j,f1,f2;
	scanf("%d",&n);
	if(n==1)
		printf("End\n");
	else
	{ 
		f1=f2=n;
		do
		{ 
			if(f1%2==0)
			{
			        f2=f1/2;
		            printf("%d/2=%d\n",f1,f2);
					j=f1;
					f1=f2;
					f2=j;
			}
			else
			{
				f2=f1*3+1;
				printf("%d*3+1=%d\n",f1,f2);
				j=f1;
				f1=f2;
				f2=j;
			}
		}
		while(f1!=1);
		printf("End\n");
	}


}