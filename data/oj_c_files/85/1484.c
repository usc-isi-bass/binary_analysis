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
	int i,n,len,j;
	char str[21]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
loop:		scanf("%s",str);
		len=strlen(str);
		if(str[0]=='_' || (str[0]>='a' && str[0]<='z') || (str[0]>='A' && str[0]<='Z'))
		{}
		else
		{
			printf("no\n");
			continue;
		}
		for(j=1;j<len;j++)
		{
			if(str[j]=='_' || (str[j]>='a' && str[j]<='z') || (str[j]>='A' && str[j]<='Z') || (str[j]>='0' && str[j]<='9'))
			{}
			else
			{	
				printf("no\n");
				i++;
				if(i<n)
					goto loop;
				else
					return 0;
			}
		}
		printf("yes\n");
	}
	return 0;
}

