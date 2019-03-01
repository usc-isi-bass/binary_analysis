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
    char str[15],substr[5];	
	while (scanf("%s%s",str,substr)!=EOF)
	{
	    int i,m=0;
		for(i=0;i<10;i++)
		{
			if(str[i]==0)
				break;
			if(str[i]>str[m])
			{
				m=i;
			}
		}
		for(i=0;i<=m;i++)
			printf("%c",str[i]);
		printf("%s",substr);
		for(i=m+1;i<15;i++)
		{
			if(str[i]==0)
				break;
			printf("%c",str[i]);
		}
		printf("\n");
	}
	return 0;
}