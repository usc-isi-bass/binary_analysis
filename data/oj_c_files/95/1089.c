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
	int i;
	char a[80]={0},b[80]={0};
	gets(a);
	gets(b);
	for(i=0;i<80;i++)
	{
		if(a[i]>64&&a[i]<91) a[i]=a[i]+32;
		if(b[i]>64&&b[i]<91) b[i]=b[i]+32;
	}
	for(i=0;i<80;i++)
	{
		if(a[i]>b[i])
		{
			printf(">");
			break;
		}
		else if(a[i]<b[i])
		{
			printf("<");
			break;
		}
		if(i==79) printf("=");
	}
}