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
	char str[20],substr[3],s[20];
	int i,j=0,k,m;
	while(scanf("%s %s",str,substr)==2)
	{
		m=strlen(str);
		for(i=0;i<m;i++)
		{
			if(str[i]>str[j])
				j=i;
		}
		for(i=m-1;i>j;i--)
			str[i+3]=str[i];
		for(i=j+1,k=0;i<j+4;i++,k++)
			str[i]=substr[k];
		str[m+3]='\0';
		printf("%s\n",str);
	}
}
