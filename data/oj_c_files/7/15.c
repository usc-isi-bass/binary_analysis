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
	int i,j,t,k;
	char s[256],w[256],c[256],x[256];
	scanf("%s",w);
	scanf("%s",s);
	scanf("%s",c);
	t=strlen(s);
    for(i=0;w[i]!='\0';i++)
	{
		for(j=0;j<t;j++)
		{
			x[j]=w[i+j];
		}
		x[j]='\0';
		if(strcmp(s,x)==0)
		{
			for(k=0;k<t;k++)
			{
				w[i+k]=c[k];
			}
			break;
		}
	}
	printf("%s",w);
	return 0;	
}