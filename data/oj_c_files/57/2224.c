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
	int i,j,l,n;
	char str[20];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",str);
			l=strlen(str);
		if(str[l-2]=='e')
			for(j=0;j<l-2;j++)
				printf("%c",str[j]);
				if(str[l-2]=='l')
			for(j=0;j<l-2;j++)
					printf("%c",str[j]);
				if(str[l-3]=='i')
			for(j=0;j<l-3;j++)
				printf("%c",str[j]);
printf("\n");

		}
	}
