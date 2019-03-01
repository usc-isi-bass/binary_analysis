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
	int n,m,i,j=2;

	scanf("%d",&n);
	for(i=1;i<j;i++)
	{
		m=(int)(n/pow(10,i-1))%10;
		if(m==0)
			break;
		else
		{
			j++;
			printf("%d",m);
		}
	}
	return 0;
}
