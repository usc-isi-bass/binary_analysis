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
	int i,a;
	scanf("%d",&a);
	if (a!=1) 
		while ((a/2!=1) || (a%2!=0)) 
		if (a%2==0)
		{
			printf("%d/2=%d\n",a,a/2);
			a=a/2;
		}
        else 
		{
           printf("%d*3+1=%d\n",a,a*3+1);
		   a=a*3+1;
		}
    if (a!=1) printf("%d/2=%d\n",a,a/2);
	printf("End\n");
	return 0;
}