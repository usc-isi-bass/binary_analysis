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
	char a[30];
	gets(a);
	int i,m=strlen(a);
	for(i=0;i<m-1;i++)
	{
		if(a[i]>='0'&&a[i]<='9')
		printf("%c",a[i]);
		else
		{
			if(a[i+1]>='0'&&a[i+1]<='9')
			printf("\n");
		}
	}
	if(a[m-1]>='0'&&a[m-1]<='9')
	printf("%c",a[i]);
	return 0;
}