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
	char sign[L+1];
	int n,len,i,j,t=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",sign);
		len=strlen(sign);
		if(sign[0]>='0'&&sign[0]<='9')
		{
			printf("no\n");
			t=0;
		}
		if(t==1)
		{
			for(j=0;j<len;j++)
			{
				if(!(sign[j]=='_'||sign[j]>='0'&&sign[j]<='9'||sign[j]>='a'&&sign[j]<='z'||sign[j]>='A'&&sign[j]<='Z'))
				{
					printf("no\n");
					break;
				}
			}
			if(j==len)
				printf("yes\n");
		}
		t=1;
	}
return 0;
}
