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
	int len,i;
	char a[100],b[100];
	gets(a);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		if(i!=len-1)
		{
			b[i]=a[i]+a[i+1];
		}
		else
		{
			b[i]=a[i]+a[0];
		}
	}
	for(i=0;i<len;i++)
	{
		printf("%c",b[i]);
	}


	
	return 0;
}