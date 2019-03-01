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
	char str[256];
	char ch;
	int a,n,i=0,j=0;
	scanf("%d%c",&n,&ch);
	while(i++<n)
	{
		gets(str);
		a=strlen(str);
		if(str[0]=='A')
			{
				printf("T");
			}else if(str[0]=='C')
			{
				printf("G");
			}else if(str[0]=='G')
			{
				printf("C");
			}else if(str[0]=='T')
			{
				printf("A");
			}
		while(j++<a)
		{
			if(str[j]=='A')
			{
				printf("T");
			}else if(str[j]=='C')
			{
				printf("G");
			}else if(str[j]=='G')
			{
				printf("C");
			}else if(str[j]=='T')
			{
				printf("A");
			}
		}
		printf("\n");
		j=0;
	}
}