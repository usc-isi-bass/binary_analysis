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
	int a[20000],b[20000];
	int n,i,k,j,l,m,bn;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
    b[0]=a[0];
	m=0;
    for(j=1;j<n;j++)
	{
		for(k=0,l=1;k<j;k++)
		{
			if(a[j]==a[k])
			{ 
				l=0;
				break;
			}
		}
	    if(l!=0)
		{
			m+=1;
			b[m]=a[j];
		}
	}
	for(bn=0;bn<m;bn++)
	{
		printf("%d ",b[bn]);
	}
    printf("%d",b[m]);
}