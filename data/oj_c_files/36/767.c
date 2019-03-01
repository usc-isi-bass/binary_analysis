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
	int i,j,flag=1;
	char a[100],b[100];
	scanf("%s",a);
	scanf("%s",b);
	for(i=0;i<strlen(a);i++)
	{
		for(j=0;j<strlen(b);j++)
		{
           if(a[i]==b[j])
		   {
			   a[i]=' ';
			   b[j]=' ';
		   }
		}
	}
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]!=' ')
		{
			flag=0;
			break;
		}
	}
	for(j=0;j<strlen(b);j++)
	{
		if(b[j]!=' ')
		{
			flag=0;
			break;
		}
	}
	if(flag)
	{
		printf("YES\n");
	}
	else printf("NO\n");
	return 0;
}