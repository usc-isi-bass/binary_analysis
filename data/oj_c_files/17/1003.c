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
	int n,i,j,k;
	char a[101];
	scanf("%d",&n);
	for(k=1;k<=n;k++)
	{
		scanf("%s",a);
		printf("%s\n",a);
		for(i=strlen(a)-2;i>=0;i--)
		{
			if(a[i]=='(') 
			{
				for(j=i+1;j<strlen(a);j++)
				{
					if(a[j]==')')
					{
						a[i]=' ';
						a[j]=' ';
break;
					}
				}
			}
			
		}
		for(i=0;i<strlen(a);i++)
		{
			if(a[i]=='(') putchar('$');
			else if(a[i]==')') putchar('?');
			else putchar(' ');
		}
		putchar('\n');
			
	}
	return 0;
}