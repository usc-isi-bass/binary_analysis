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
	int n,i,len;
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		char*p;
		int s=0;
		char*a=(char*)malloc(sizeof(char)*81);
		gets(a);
		len=strlen(a);
		p=a;
		if(!((*p>='a'&&*p<='z')||(*p>='A'&&*p<='Z')||(*p=='_')))
			printf("0\n");
		else
		{
			for(p=a+1;p<a+len;p++)
			{
				if((*p>='a'&&*p<='z')||(*p>='A'&&*p<='Z')||(*p>='0'&&*p<='9')||(*p=='_'))
					s++;
			}
			if(s==len-1)
				printf("1\n");
			else
				printf("0\n");
		}

	}
	return 0;
}