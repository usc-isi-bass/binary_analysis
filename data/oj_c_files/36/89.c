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
	int i,j,k;
    char c[100],d[100];
	scanf("%s%s",c,d);
	if(strlen(c)==strlen(d))
	{
	for(i=0;c[i]!='\0';)
	{
		k=0;
		for(j=0;d[j]!='\0';j++)
		{
			if(c[i]==d[j])
			{
				k=1;
				d[j]=' ';
				i=i+1;
				break;
			}
		}
	}
	if(k==0)
		printf("NO");
	else printf("YES");
	}
	else printf("NO");
}
	