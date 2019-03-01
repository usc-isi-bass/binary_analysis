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
	int n,i,t;
	scanf("%d",&n);
	t=0;
	for(i=3;i<=7;i=i+2)
	{
		if(n%i==0)
		{	
			if(t>=1)
				printf(" ");
			printf("%d",i);
			t++;
		}
	}
	if(t==0)
		printf("n");
}