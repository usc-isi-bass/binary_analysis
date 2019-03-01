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
	int n,i,j,len,k;
	char str[21];
	scanf("%d",&n);
	for(i=1; i<=n;i++)
	{
        k=0;
		scanf("%s",str);
		len=strlen(str);
		if(((str[0]>64)&&(str[0]<91))||((str[0]>96)&&(str[0]<123))||(str[0]=='_'))
		{
			for(j=1;j<len;j++)
			{
				if(!(((str[j]>47)&&(str[j]<58))||((str[j]>64)&&(str[j]<91))||((str[j]>96)&&(str[j]<123))||(str[j]=='_')))
				{
					k++;
				}
			}
			if(k==0)
			{
				printf("yes\n");
			}
			else
			{
				printf("no\n");
			}
		}
		else
		{
			printf("no\n");
		}
	}
	return 0;
}

