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
	char a[200];
	int n, i, j, k, m;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		scanf("%s", a);
		puts(a);
		k=strlen(a);
		for(j=0;j<k;j++)
		{
			if(a[j]==')')
			{
				for(m=j;m>=0;m--)
					if(a[m]=='(')
					{a[m]=' ';a[j]=' ';break;} 
			}
			if(a[j]!='('&&a[j]!=')')
				a[j]=' ';
		}
		for(j=0;j<k;j++)
		{
			if(a[j]=='(')
			{
				a[j]='$';
			}
		    else if(a[j]==')')
			{
				a[j]='?';	
			}
		}
		puts(a);
	}
	return 0;
}