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
	char a[256],b[256],c[256];
	gets(a);
	gets(b);
	gets(c);
	int q,w,e;
	q=strlen(a);
	w=strlen(b);
	e=strlen(c);
	int i,j,k;
	int result=1,d;
	for(k=0;k<q;k++)
	{
		if(a[k]==b[0])
		{
			result=1;
			for(i=k,j=0;i<w+k,j<w;i++,j++)
			{
				d=a[i]-b[j];
				if(d!=0)  result=0;
			}
			if(result)
			{
				for(i=k,j=0;j<e,i<w+k;i++,j++)
				{
					a[i]=c[j];
				}
				break;
			}
		}
	}
	puts(a);
}

