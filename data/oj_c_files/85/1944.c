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
	int n,i,j;
	
	scanf("%d\n",&n);
	for (i=1;i<=n;i++)
	{
		char s[21];
		gets(s);
		if (1^((s[0]>='a'&&s[0]<='z')||(s[0]>='A'&&s[0]<='Z')||(s[0]=='_'))) 
		{
			printf("no\n");continue;
		}
		for (j=1;j<strlen(s);j++)
		{
			if (1^((s[j]>='a'&&s[j]<='z')||(s[j]>='A'&&s[j]<='Z')||(s[j]>='0'&&s[j]<='9')||(s[j]=='_'))) break;
		}
		if (j<strlen(s)) printf("no\n");
		  else printf("yes\n");
	}
} 