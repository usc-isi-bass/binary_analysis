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
	char a[200],b[200];
	int len,num=0;
	int j,i;
	scanf("%s %s",a,b);
	if(strlen(a)!=strlen(b))
		printf("NO");
	else 
	{
		len=strlen(a);
		for(j=0;j<len;j++)
		{
			for(i=0;i<len;i++)
			{
				if(a[j]==b[i])
				{
					a[j]='0';
					b[i]='0';
				}
			}
		}
		for(i=0;i<len;i++)
		{
			if(a[i]=='0')
				num++;
		}
		if(num==len)
			printf("YES");
		else printf("NO");
	}
	return 0;
}
