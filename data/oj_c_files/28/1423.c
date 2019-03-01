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
	char s[1000];
	gets(s);
	int k=strlen(s);
	s[k]=' ';
	int i,a=0;
	for(i=0;i<=k;i++)
	{
		if(s[i]==' '&&s[i+1]==' ')
		{
			continue;
		}
		if(s[i]!=' ')
		{
			a++;
		}
		if(s[i]==' ')
		{
			printf("%d",a);	
			if(i<k)
			{
				printf(",");
			}
		}
		if(s[i]==' '&&s[i+1]!=' ')
		{
			a=0;
		}
		
	}
	return 0;
}