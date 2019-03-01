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
	int N,x,y=0,i,j,a[1000]={0},m=0,n=0;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			scanf("%d",&x);
			a[i]=a[i]+x;
		}
		if(a[i]==255*(N-2)) m=m+1;
		else if(a[i]<255*(N-2)) n=N-a[i]/255;
	}
	y=(n-2)*m;
	printf("%d",y);
}
