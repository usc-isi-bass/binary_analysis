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
    int n,j,k,m=1,x,a[1000];
    scanf("%d",&n);
    if(n==0) return(0);
	else
	{
    scanf("%d",&x);
    printf("%d",x); 
    a[0]=x; 
	for(j=1;j<n;j++)
	{
		scanf("%d",&x);
		k=0;
		while((k<m) && (a[k]!=x))
			k++;
		if(k==m) 
		{a[m++]=x;
		printf(" %d",x);
		}
	}
	printf("\n");
	}
}