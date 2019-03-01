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
	int b[101];
	int i,chang,j=1;
	gets(a);
	b[0]=0;
	chang=strlen(a);
	for(i=0;i<chang;i++)
	{
		if(a[i]==' ')
		{
			b[j]=i;
			j++;
		}
	}
	b[j]=chang;
	for(;j>1;j--)
	{
	     for(i=b[j-1]+1;i<b[j];i++)printf("%c",a[i]);
	     printf(" ");
	}
	for(i=0;i<b[1];i++)printf("%c",a[i]);
}