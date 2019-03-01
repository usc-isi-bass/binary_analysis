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
	int a,b,c,d=0,e,f,g;
	char s[45],t[45];
	scanf("%d",&a);
	scanf("%s",s);
	printf("%s",s);
	d=strlen(s);
	for(b=1;b<a;b++)
	{
		scanf("%s",s);
		c=strlen(s);
		d=d+c+1;
		if(d>80)
		{
			printf("\n");
			printf("%s",s);
			d=strlen(s);
		}
		else
		{

		printf(" ");
		printf("%s",s);
		}
	}
}
		

