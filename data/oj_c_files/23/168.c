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
char a[101];
gets(a);
int l;int k;

char b[103]=" \0";

strcat(b,a);

l=strlen(b);int i;int j;

for(i=l;i>=0;--i)
{
	if(b[i]!='\0')
	{
		if(b[i]==' ')
		{
			if(b[i+1]!=' ')
				for(j=i+1;j<=k;j++)
					printf("%c",b[j]);
			if(i==0)
				printf("\n");
			else printf("%c",b[i]);

		}
		else if(b[i+1]==' '||b[i+1]=='\0')
			k=i;
	}

}



}