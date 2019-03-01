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
	char s[p];
	gets(s);
	int i,j,k,m,x=0;
	char a[p];
	gets(a);
	char b[p];
	gets(b);
	i=strlen(a);
	for(j=0;s[j]!='\0';j++)
	{
		if(a[0]==s[j])
		{
			for(k=1;k<i;k++)
			{
				if(a[k]!=s[j+k])
				{
					break;
				}
			}
		}
		if(k==i)
		{
			for(m=0;m<j;m++)
			{
				printf("%c",s[m]);
			}
			printf("%s",b);
			for(m=i+j;s[m]!='\0';m++)
			{
				printf("%c",s[m]);
			}
			x=1;
			break;
		}
	}
    if(x==0)
	{
		printf("%s",s);
	}
	return 0;
}
