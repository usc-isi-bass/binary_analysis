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
	char s[200];
	int i,n,j;
	gets(s);
	n=strlen(s);
	char *p=s;
        for(i=n-1;i>=0;i--)
			*(p+i+1)=*(p+i);
		*(p+0)=*(p+n+1)=' ';/*why????*/
		for(i=n;i>=0;i--)
		{
			if(*(p+i)==' ')
			{
				for(j=i+1;*(p+j)!=' ';j++)
					printf("%c",*(p+j));
			    if(i!=0) printf(" ");
			}
		}
}
				

	
