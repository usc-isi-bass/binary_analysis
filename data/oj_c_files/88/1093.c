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
	char c[30];
	int i,n,shi,zhong,m,l;
	gets(c);
	n=strlen(c);
	for(i=0;i<n;i++)
	{
		if(c[i]<='9'&&c[i]>='0')
		{
			shi=i;
			for(l=i;l<n;l++)
			{
				if(c[l]>'9'||c[l]<'0')
				{
					zhong=l-1;
					break;
				}
				if(l==n-1)
					zhong=n-1;
			}
			for(m=shi;m<zhong;m++)
			{
				printf("%c",c[m]);
			}
			printf("%c\n",c[zhong]);
			i=zhong;
		}
	}
	return 0;
}

