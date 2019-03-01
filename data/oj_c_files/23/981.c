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
	int i,l;
	char a[100]={'\0'},b[100]={'\0'};
	gets(a);
	l=strlen(a);
	for(i=l;i>0;i--)
	{ 
		a[i]=a[i-1];		
	}
	a[0]=' ';
	for(i=l;i>=0;i--)
	{
		if(a[i]==' ')
		{
			printf("%s",&a[i+1]);
			a[i]='\0';
			if(i>0)printf(" ");
		}
	}
	return;
}
