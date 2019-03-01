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
	char str[30];
	int n,m,i;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{gets(str);
	m=strlen(str);
	if(str[m-1]=='g')
	str[m-3]='\0';
	else
		str[m-2]='\0';
	printf("%s\n",str);
	}
}
