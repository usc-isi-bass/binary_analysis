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
	int a[6]={100,50,20,10,5,1},b[6]={0};
	int i,n;
	scanf("%d",&n);
	for(i=0;i<6;i++)
	{
		if(n>0)
		{
	    	b[i]=n/a[i];
	    	n=n-b[i]*a[i];
		}
		else
			break;
	}
	for(i=0;i<6;i++)
		printf("%d\n",b[i]);
	return 0;

}