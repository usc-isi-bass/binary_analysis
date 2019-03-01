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
	int n,i,x[100];
	int max=0,secondmax=0;
	scanf("%d",&n);
    for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
		if(x[i]>=max)
		{
		secondmax=max;
		max=x[i];
		}
		if(x[i]>secondmax&&max>x[i])
		{
			secondmax=x[i];
		}
		
	}
	printf("%d\n%d\n",max,secondmax);
	return 0;
}