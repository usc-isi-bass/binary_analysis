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
	int i,flag,n;
	char a[100],b[100];
	gets(a);
	gets(b);
	n=strlen(a);
	flag=0;
	for(i=0;i<n;i++)
	{
		if(a[i]!=b[i])
		{
			if(a[i]>='a')
				a[i]-='a'-'A';
			if(b[i]>='a')
				b[i]-='a'-'A';
			if(a[i]!=b[i])
			{
				flag=(a[i]>b[i])?1:-1;
				break;
			}
		}
	}
	if(flag==0)
		printf("=");
	else if(flag==1)
		printf(">");
	else
		printf("<");
}
