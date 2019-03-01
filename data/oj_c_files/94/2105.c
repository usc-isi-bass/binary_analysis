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
    int n,a[500],i,j=0,m,b[500],t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2!=0)
		{
             b[j]=a[i];
			 j++;
		}
	}
	m=j+1;
    for(j=1;j<m;j++)
		for(i=0;i<m-j;i++)
			if(b[i]>b[i+1])
			{
				t=b[i];
				b[i]=b[i+1];
				b[i+1]=t;
			}
    printf("%d",b[1]);
    for(j=2;j<m;j++)
	    printf(",%d",b[j]);
	return 0;
}