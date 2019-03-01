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
	char a[101];
	char b[101];
	int i,n,m,l;
	gets(a);
	l=strlen(a);
	n=0;
	for(i=0;i<l;i++)
	{
		b[i]=(n*10+a[i]-'0')/13+'0';
		n=(n*10+a[i]-'0')%13;
	}
	if(l==1)
		printf("0");
	else if(l<=2&&((a[0]-'0')*10+a[1]-'0')<=13)
		printf("0");
	else
	{
		if(((a[0]-'0')*10+a[1]-'0')>=13)
		{
			for(i=1;i<l;i++)
				printf("%c",b[i]);
		}
		else
		{
			for(i=2;i<l;i++)
				printf("%c",b[i]);
		}
	}
	printf("\n");
	printf("%d",n);

		
}