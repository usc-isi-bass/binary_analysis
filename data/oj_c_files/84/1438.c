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
	int a;
	int b;
	int i=1;
	int m=0,n=0;
	scanf("%d\n",&a);
	while(i<=a)
	{
		scanf("%d\n",&b);
			if(b>=m)
			{
				n=m;
				m=b;
			}
			if(b<m&&b>n)
			{
				n=b;
			}
			i++;
	}
		printf("%d\n",m);
		printf("%d\n",n);

    
	return 0;
}