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
	int i,num=0,n;
	char a[20000];
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]!=' ')num++;
		else if(a[i]==' '&&num!=0)
		{printf("%d",num);if(i!=n-1)printf(",");num=0;}
		if(i==n-1)printf("%d",num);
	}
}