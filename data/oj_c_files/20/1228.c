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
	char str[11],subs[4];
	int l1,i,j,max;
	while(scanf("%s%s",str,subs)!=EOF)
	{
		l1=strlen(str);
	
		max=0;
		for(i=0;i<l1;i++)
		{
			if(str[i]>str[max])
				max=i;
		}
		for(i=0;i<=max;i++)
		{
			printf("%c",str[i]);
		}
		printf("%s",subs);
		for(i=max+1;i<l1;i++)
			printf("%c",str[i]);
		printf("\n");
	}
	return 0;
}