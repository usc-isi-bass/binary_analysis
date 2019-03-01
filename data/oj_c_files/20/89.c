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
	int p,q,m,n,i;
	char str[15],substr[5];

	while(scanf("%s",str)!=EOF)
	{
		scanf("%s",substr);
		p=strlen(str);
		q=0;
		for(i=1;i<p;i++)
		{
			if( (m=str[i]) >(n=str[q]) ) 
				q=i;
			
		}
		for(i=0;i<=q;i++) 
		{printf("%c",str[i]);}
		printf("%s",substr);
		for(i=q+1;i<p;i++)
		{printf("%c",str[i]);}
		printf("\n");
	}
}
