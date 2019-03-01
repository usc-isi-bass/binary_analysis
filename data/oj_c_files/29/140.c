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


int abc(int n)
{
	if(n==1) return 1;
	if(n==2) return 2;
	if(n>2) return abc(n-1)+abc(n-2);
}

int main()
{
    int i,j,m,n;
	float sum=0;
    scanf("%d",&m);
    for(i=0;i<m;i++)
	{
		scanf("%d",&n);
        for(j=1;j<=n;j++)
		{
			sum+=(float)abc(j+1)/(float)abc(j);
		}
		printf("%.3f\n",sum);
		sum=0;
	}


	return 0;
}