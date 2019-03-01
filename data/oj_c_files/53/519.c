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
	int a[300],n,i,j,m[300]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
		for(j=0;j<i;j++)
		{
		 if(a[j]==a[i])
		    m[i]=m[i]+1;
                                        }
			if(m[i]==0)
                         {if(i==0)
		             printf("%d",a[0]);
			else printf(",%d",a[i]);}
		
	}
}
