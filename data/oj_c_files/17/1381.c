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
	int n, l, i, k;
	char str[200]={0};
	scanf("%d\n", &n);
	while(n)
	{
		scanf("%s", str);
		puts(str);
		printf("\n");
		l=strlen(str);
		for(i=l-1; i>=0; i--)
		{
			if(str[i]=='(')
			{
				for(k=i; k<l; k++)
				{
					if(str[k]==')')
					{
						str[i]=' ';
						str[k]=' ';
						k=l;
					}
				}
			}
		}
		for(i=0;i<l;i++)
		{
			if(str[i]=='(')
			{
				str[i]='$';
			}
			else if(str[i]==')')
			{
				str[i]='?';
			}
			else
			{
				str[i]=' ';
			}
		}
		puts(str);
		n--;
	}
	return 0;
}