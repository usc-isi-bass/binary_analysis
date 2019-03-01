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
     int *p[1000],n,m,i,j,t;
	 scanf("%d%d",&n,&m);
	 for(i=0;i<n;i++)
	 {
		 p[i]=(int *)malloc(1000);
		 for(j=0;j<m;j++)
			 scanf("%d",*(p+i)+j);
	 }
	
	for(j=0;j<m+n-1;j++)
	{
		if(j<m)
			t=0;
		else
			t=j-m+1;
		for(i=t;i<n&&i<=j;i++)
			printf("%d\n",*(*(p+i)+j-i));
	}
	
		 return 0;
}

