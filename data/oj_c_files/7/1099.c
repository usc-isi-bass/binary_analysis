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
	char s[256],b[256],c[256];
	int i,j,k,n,m;
	scanf("%s",&s);
	scanf("%s",&b);
	scanf("%s",&c);
	n=strlen(s)-strlen(b);
	for(i=0;i<=n;i++)
	{
		m=0;
		for(j=0,k=i;j<strlen(b);j++,k++)
		{
			if(s[k]==b[j])
			{
				m++;
			}
		}
		if(m==strlen(b))
		{
			for(j=i,k=0;j<strlen(b)+i;j++,k++)
			{
				s[j]=c[k];
			}
			break;
		}
	}
	puts(s);


	return 0;
}

