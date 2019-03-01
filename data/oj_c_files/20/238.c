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
	char str[11],substr[4];
	int i,k=0,n;
	char a;
	while(scanf("%s %s",str,substr)==2)
	{
		n=strlen(str);
		a=str[0];
		for(i=0;;i++)//??ASCII???????
		{
			if(str[i]=='\0')
			break;
			if(str[i]>a)
			{
				a=str[i];
				k=i;
			}
		}
		for(i=0;i<=k;i++)
			printf("%c",str[i]);
		for(i=0;i<=2;i++)
			printf("%c",substr[i]);
		for(i=k+1;i<n;i++)
			printf("%c",str[i]);
		printf("\n");
	}
	
}


