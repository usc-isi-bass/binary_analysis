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
	int n,i,*p,k,m,j;
	scanf("%d",&n);
	m=n;
	p=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",(p+i));
	}
    scanf("%d",&k);
	for(i=0;i<m;i++)
	{
		if(*(p+i)==k)
		{
			for(j=i;j<m-1;j++)
			{
				*(p+j)=*(p+j+1);
			}
			i--;
	    	m--;
		}
	}
	for(i=0;i<m-1;i++)
	{
		printf("%d ",*(p+i));
	}
    printf("%d",*(p+m-1));
	return 0;
}
