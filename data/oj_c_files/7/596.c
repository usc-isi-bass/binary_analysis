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
	char s[256];
	char a[256];
	char b[256];
	int i,j,x=0,m,n,y=0,p;
	char c;
	scanf("%s",s);
	scanf("%s",a);
	scanf("%s",b);
	n=strlen(b);
	p=strlen(s);
	for(i=0;i<=p-n;i++)
	{
		c=s[i];
		if(c==a[0])
		{
			for(j=0;j<n;j++)
			{
				if(a[j]!=s[i+j])
				{
					x=1;
				}
				else
					x=0;
			}
			if(x==0)
			{
				m=i;
				y=1;
				break;
			}
		}
	}
	if(y==1)
	{
	for(i=m,j=0;i<m+n;i++,j++)
	{
		s[i]=b[j];
	}
	}
	puts(s);
	return 0;
}


