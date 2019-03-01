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
	int i,n,l,m;
	char a[100],b[100];
	scanf("%d",&n);
	for(;n>0;n--)
	{
		i=1;
		scanf("%s %s",a,b);
		l=strlen(b);
		m=strlen(a);
		while(i<=l)
		{
			if(a[m-i]>=b[l-i])
				a[m-i]=a[m-i]-b[l-i]+48;
			else
			{
				a[m-i]=a[m-i]+58-b[l-i];
				a[m-i-1]=a[m-i-1]-1;
			}
			i++;
		}
		for(i=m-l-1;m>=0;m--)
		{
			if(a[i]<'0')
			{
				a[i]+=10;
				a[i-1]=a[i-1]-1;
			}
			else break;
		}
		printf("%s\n",a);
	}
}