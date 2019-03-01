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
	char a[110];
	char b[110];
	char c[110];
	while(gets(a))
	{
		strcpy(b,a);
		strcpy(c,a);
		int i,j;
		int n=strlen(a);
		int ju=0;
		for(i=n-1;i>=0;i--)
		{
			if(a[i]=='(')
			{
				for(j=i;j<n;j++)
				{
					if(a[j]==')')
					{
						a[j]=99;
						b[i]=b[j]=32;
						break;
					}
				}
				if(j==n)
				{
					b[i]='$';
				}
			}
		}
		for(i=0;i<n;i++)
		{
			if(b[i]!=32&&b[i]!=')'&&b[i]!='$')
				b[i]=32;
			else if(b[i]==')')
				b[i]='?';
		}
		printf("%s\n",c);
		printf("%s\n",b);
	}
	return 0;
}



