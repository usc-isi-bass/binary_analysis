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
	int i,k,c=0,d[100],e=0;
	char a[100],b[100];
	gets(a);
	k=strlen(a);
	for(i=0;i<k;i++)
	{
		if(a[i]==' ')
		{d[e]=i;e++;}
	}
	for(;e>0;e--)
	{
		for(i=(d[e-1]+1);;i++)
		{
			if(a[i]==' '||a[i]=='\0') break;
			else {b[c]=a[i];c++;}
		}
		b[c]=' ';
		c++;
	}
	for(i=0;i<a[(d[0])];i++)
	{
	if(a[i]!=' ')
	{b[c]=a[i];c++;}
	}
	for(i=0;i<k;i++)
		printf("%c",b[i]);
}