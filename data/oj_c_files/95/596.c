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
	char a[100],b[100];
	int i,p;
	gets(a);
	gets(b);
	p=strlen(a);
	for(i=0;i<=p-1;i++)
	{
		if((a[i]>'A'||a[i]=='A') && (a[i]<'Z'||a[i]=='Z'))
			a[i]=a[i]+32;
		if((b[i]>'A'||b[i]=='A') && (b[i]<'Z'||b[i]=='Z'))
			b[i]=b[i]+32;
	}
	for(i=0;i<=p-1;i++)
	{
		if(a[i]>b[i])
		{
			printf(">");break;
		}
		if(a[i]<b[i])
		{
			printf("<");break;
		}
	}
	if(i==p)
		printf("=");
}
