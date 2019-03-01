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

main()
{
    int i=0,t=0,n,b[5000],j=0,k=-1;
	char s[5000];
    gets(s);
    n=strlen(s);
	while(i<n)
	{
		if(s[i]==' '||s[t]==NULL)
			i=i+1;
		else
		{
			t=i;
			j=0;
			while(1)
			{
				if(s[t]==' '||s[t]==NULL)
					break;
				else
					j=j+1;
				t=t+1;
			}
			k=k+1;
			b[k]=j;
			i=i+j;
		}
	}
	i=0;
	while(i<k)
	{
		printf("%d,",b[i]);
		i=i+1;
	}
	printf("%d",b[i]);
	return 0;
}

