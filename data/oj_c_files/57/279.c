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
	char s[20];
	int m,n,i,j,len;
	scanf("%d\n",&n);
	for (i=1;i<=n;i++)
	{
		gets(s);
		len=strlen(s);
		if (s[len-1]=='g') s[len-3]='\0';
		 else s[len-2]='\0';
		puts(s);
	}
}