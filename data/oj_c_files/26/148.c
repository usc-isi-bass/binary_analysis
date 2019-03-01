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
	char a[110]={0};
	int i,n;
	for(i=0;i<110;i++)
	{
		scanf("%c", &a[i]);
		if(a[i]==' ' && a[i-1]==' ') i-=1;
		if(a[i]=='\n')
		{
			n=i;
			break;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%c", a[i]);
	}
	printf("\n");
    return 0;
}