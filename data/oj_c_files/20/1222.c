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
	while(scanf("%s %s",str,substr)!=EOF)
	{
		int i,m=0;
		char max=str[0];
		for(i=1;str[i]!='\0';i++)
			if(str[i]>max)
			{max=str[i];m=i;}
		for(i=0;i<=m;i++)
			printf("%c",str[i]);
		int p=strlen(substr);
		for(i=0;i<p;i++)
			printf("%c",substr[i]);
		int q=strlen(str);
		for(i=m+1;i<q;i++)
			printf("%c",str[i]);
		printf("\n");
	}

}
