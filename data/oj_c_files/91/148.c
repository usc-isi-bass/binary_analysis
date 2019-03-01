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
    char a[100],b[100];
	int i,l;
	gets(a);
	l=strlen(a);
	if(l==1)printf("%c\n",a[0]+48);
	else
	{
	for(i=0;i<l-1;i++)b[i]=a[i]+a[i+1];
	b[l-1]=a[0]+a[l-1];
	for(i=0;i<l;i++)printf("%c",b[i]);
	}
	return 0;
}

