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
	char a[150],b[150];
	int i,len;
	gets(a);
	len=strlen(a);
	for(i=0;i<len;i++)
		if(i!=len-1)b[i]=a[i]+a[i+1];
		else b[i]=a[i]+a[0];
	b[i]=0;
	printf("%s\n",b);
}