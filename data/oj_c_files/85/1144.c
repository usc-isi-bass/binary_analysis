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
	int n;

	scanf("%d",&n);
	scanf("\n");
	
	while(n--)
	{
		char str[21];
		gets(str);
		int i;
		char a=str[0];
		if (!((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a=='_')))
		{
			puts("no");
			continue;
		}

		for(i=1;i<strlen(str);i++)
		{
			a = str[i];
			if (!((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a=='_')||(a>='0'&&a<='9')))
			{
				puts("no");
				break;
			}
		}

		if(i>=strlen(str))
			puts("yes");
	}

	return 0;
}