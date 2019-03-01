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
    int i,j,k,sign,l;
	char s[550];

	gets(s);
	l=strlen(s);
	for(i=2;i<=l;i++)
	{
	    for(j=0;j<l;j++)
		{
			sign=0;
		    for(k=j;k<j+i;k++)
			{
			    if(s[k]==s[j+i-1-k+j])
					sign++;
			}
			if(sign==i)
			{
				for(k=j;k<j+i;k++)
					printf("%c",s[k]);
				printf("\n");
			}
		}
	}
	return 0;
}