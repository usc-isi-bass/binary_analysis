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
	char s[300],d[300],r[300];
	int i=0,j,k,ls,lr,ld;
	int flag=0;
	int cont=0;
	gets(s);
	gets(d);
	gets(r);
	ls=strlen(s);
	ld=strlen(d);
	lr=strlen(r);
	for(i=0;i<ls;)
	{
		flag=0;
		for(j=0;j<ld;j++)
		{
			if(s[i+j]==d[j])
				flag++;
			if(flag==ld)
				cont++;
		}

		if(flag==ld&&cont==1)
		{
			cont++;
			for(k=0;k<lr;k++)
			{
				s[i+k]=r[k];
			}
			i=i+lr;
			continue;
		}
		else
		{
			i++;
			continue;
		}
		
	}
	puts(s);
}
	