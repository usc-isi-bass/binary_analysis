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
	char a[50]={'\0'};char b[50]={'\0'};
	int i,j;
	scanf("%s %s",a,b);
	if (strlen(a)!=strlen(b)) goto null;
	for (i=0;i<strlen(a);i++)
	{
		for (j=0;j<strlen(b);j++)
			if (a[i]==b[j])
			{
				b[j]='0';
				break;
			}
		if (j==strlen(b)) goto null;
	}
	printf("YES\n");
	goto allright;
null: printf("NO\n");
allright:;
}