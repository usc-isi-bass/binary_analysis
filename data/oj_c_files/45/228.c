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
	char a[51],b[51];
	int m,n,i,j,k,x=0;
	scanf("%s%s",a,b);
	m=strlen(a);
	n=strlen(b);
	for(i=0;i<=n-1;i++)
	{	
		if(a[0]==b[i])
		{	
			for(k=0,j=i;a[k]==b[j];k++,j++)
			{	
				if(k==m-1)
				{	
					x=1;
					printf("%d\n",j+1-m);
					break;
				}
			}
			if(x==1)
				break;
		}
	}
}
		

