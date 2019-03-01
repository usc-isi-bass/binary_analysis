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

int main ()
{
	char a[100000];
	int b[100000];
	int n,i,j,k,c,d;
	scanf("%d",&n);
		
	for(i=1;i<=n;i++)
	{
         scanf("%s",a);
	
		for(j=0;a[j];j++)
		{
			
			c=0;
			for(k=0;a[k];k++)
			{
				if(a[k]==a[j])
			    c++;
			}
			b[j]=c;
		}
		d=-1;
		for(k=0;a[k];k++)
		{
			if(b[k]==1)
			{
				printf("%c\n",a[k]);
				d++;
				break;
			}
		}
		if(d!=0)
		{printf("no");}
	}
	return 0;
}