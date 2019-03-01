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
	char a[82]={0}, b[82]={0};
	int i;
	gets(a);
	gets(b);
	for(i=0;i<82;i++)
	{
		if(a[i]>='a'&&a[i]<='z')
		{
			a[i]=a[i]-32;
		}
		if(b[i]>='a'&&b[i]<='z')
		{
			b[i]=b[i]-32;
		}
		if(a[i]<' ')a[i]=0;
		if(b[i]<' ')b[i]=0;
	}
	for(i=0;i<82;i++)
	{
		if(a[i]<b[i])
		{
			printf("<");
			break;
		}
		if(a[i]>b[i])
		{
			printf(">");
			break;
		}
	}
	
	if(i==82)
	{
		printf("=");
	}

	
	return 0;
}
