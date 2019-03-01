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
	char s[10000];
	char tmp[105],a[105],b[105];
	int i,j;
	gets(s);
	scanf("%s",a);
	scanf("%s",b);
	for(i=0,j=0;s[i]!='\0';i++)
	{
		if(s[i]==' ')
		{
			tmp[j]='\0';
			j=0;
			if(strcmp(a,tmp)==0)
			{
				printf("%s ",b);
			}
			else 
			{
				printf("%s ",tmp);
			}
		}
		else
		{
			tmp[j]=s[i];
			j++;
			
		}
	}
	tmp[j]='\0';
	if(strcmp(a,tmp)==0)
			{
				printf("%s\n",b);
			}
			else 
			{
				printf("%s\n",tmp);
			}
	return 0;
}