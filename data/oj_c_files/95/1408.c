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

main()
{
	char a[80],b[80];
	int i;
	gets(a);
	gets(b);
	for(i=0;i<80;i++)
	{	
		if(a[i]>='A'&&a[i]<='Z')
			a[i]=a[i]+32;
		if(b[i]>='A'&&b[i]<='Z')
			b[i]=b[i]+32;
	}
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]>b[i])
		{
			printf(">");
			break;
		}
		else if(a[i]<b[i])
		{
			printf("<");
			break;
		}
		else if(a[i]==b[i])
			continue;
	}
	if(i>=strlen(a))
		printf("=");
}

