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
	char a[100];
	gets(a);
	int i,j,n,p=-1,k;
	for(i=0;i<100;i++)
	{
	if(a[i]==' ')
		n=i;
	}
	for(i=n;i<100;i++)
	{
		if(p>0)
			break;
		if(a[i]==a[0])
		{
			for(j=1;a[i+j]=a[j];j++)
			{
				if(j>n-2)
				{
					p=i-n-1;
				break;
				}
			}
		}
	}

		printf("%d",p);
return 0;
}
