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
	char str[14],substr[4],c;
	int i,Max;
	while(scanf("%s%s",str,substr)!=EOF)
	{
		c=str[0];
		for(i=0;str[i]!='\0';i++)
			if(str[i]>c)
			{c=str[i];Max=i;}
		for(i=0;str[i]!='\0';i++)
		{
		    printf("%c",str[i]);
		    if(i==Max)
			    printf("%s",substr);
		}
		printf("\n");
	}

}