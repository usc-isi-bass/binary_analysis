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
	char str[10],s[10],p;
	int i,t;
	while (scanf("%s",str)!=EOF)
	{
		scanf("%s",s);
		p=str[0];t=0;
		for(i=1;i<strlen(str);i++)
		{
			if (str[i]>p)
			{
				p=str[i];
				t=i;
			}

		}
        for (i=0;i<=t;i++)
			printf("%c",str[i]);
		printf("%s",s);
		for (i=t+1;i<strlen(str);i++)
			printf("%c",str[i]);
		printf("\n");
		
	}
}