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
	int n,i,len;
	char *p;
	char str[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",str);
		len=strlen(str);
		p=&str[len-1];
		if(*p=='g')
		{
			p=&str[len-3];
			*p='\0';
			printf("%s\n",str);
		}
		else
		{
            p=&str[len-2];
			*p='\0';
			printf("%s\n",str);
		}
	}
	return 0;
}

