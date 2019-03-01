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
	int b;
	scanf("%d",&b);
	while(b!=-1)
	{
		int a[15]={0};
		int i=1;
		int k,j;
        int sum=0;
		a[0]=b;
		scanf("%d",&a[i]);
		while(a[i]!=0)
		{
			i++;
			scanf("%d",&a[i]);
		}
		for(k=0;k<i;k++)
		{
			for(j=k+1;j<i;j++)
			{
				if(a[j]==2*a[k]||a[k]==2*a[j])
					sum++;
			}
		}
        printf("%d\n",sum);
		scanf("%d",&b);
	}		
}