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
	int a[17],b=0,i,j,l,m=0,q;
	for(i=0;i<=16;i++)
         a[i]=0;
	
	for(q=0;;q++)	
	{
		for(i=0;i<16;i++)
		{
		scanf("%d",&a[i]);
		b=b+1;
		if(a[i]==0)
		{
			break;
		}
		}
		if(a[0]==-1)
		{
			goto lab;
		}
	for(j=0;j<b;j++)
		{
		for(l=j+1;l<b;l++)
				{
					if(a[j]==2*a[l]||a[l]==2*a[j])
					{
						m=m+1;
					}
				}
		}
			printf("%d\n",m);
		m=0;
		b=0;
	}
lab:;
}

