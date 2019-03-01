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
	int n,count=0;
	int a[3];
	scanf("%d",&n);
	if(n%3!=0&&n%5!=0&&n%7!=0)
	{
		printf("n");
	}
	else 
	{
		if(n%3==0)
		{
			printf("3");
			count++;
		}
		
		if(n%5==0)
		{
			if(count==1) printf(" 5");
			if(count==0) printf("5");
			count++;
		}
		if(n%7==0)
		{
			if(count==0) printf("7");
			else printf(" 7");
		}

	
			
	}

	return 0;
}
