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
	char s[500];
	int l,i,k,t,g=0;
	scanf("%s",s);
	l=strlen(s);
	for(k=1;k<l;k++)/*k???????*/
	{
		for(i=0;i<l-k;i++)/*i???????*/
		{
			for(t=1;t<=k;t++)
			{
				g=1;
				if(s[i+t-1]!=s[i+2*k-t])/*????*/
				{
					g=0;
					break;
				}
			}
			if(g==1)
			{
				for(t=i;t<2*k+i;t++)
				printf("%c",s[t]);
				printf("\n");
			}
		}
	}
}
