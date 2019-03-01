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
    int n,a,b,j=0,sum =0 ,r[100]={0},max=0;
	scanf("%d",&n);
	for(int i=0; i<n;i++)
	{
		scanf("%d%d",&a,&b);
		if( (a<=140&&a>=90) && (b<=90&&b>=60) )
			sum++;
		else if ( (a>=140||a<=90) || (b>=90||b<=60) )
		{
			r[j]=sum;
			j++;
			sum=0;
		}
		if(i==n-1) r[j+1]=sum;
	}

	for(int m=0;m<j+2;m++)
	{
		max=(max>r[m])?max:r[m];
	}

    printf("%d\n",max);
	
    return 0;
}