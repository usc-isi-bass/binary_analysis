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
{	int i,j,l,t;
	char str[16],t_max,substr[4];
	while(scanf("%s%s",&str,&substr)!=EOF)
	{
		l=strlen(str);
		t_max=-1;
		for (i=0;i<l;i++)
			if (t_max<str[i])
			{
				t=i;
				t_max=str[i];
			}
		for (i=0;i<=t;i++)
			printf("%c",str[i]);
		printf("%s",substr);
		for (;i<l;i++)
			printf("%c",str[i]);
		printf("\n");
	}
	return 0;
}
