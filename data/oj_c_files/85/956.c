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
	int n,i;
	char a[100][21],*p;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
		p=a[i];
		
		while(*p!='\0')
		{
			if(a[i][0]>='0'&&a[i][0]<='9')
			{
				printf("no\n");
				break;
			}
            if((*p>='0'&&*p<='9')||(*p>='a'&&*p<='z')||(*p>='A'&&*p<='Z')||*p=='_')
			{
				p++;
			}
			else {
				printf("no\n");
				break;
			}
			if(*p=='\0')
			{
				printf("yes\n");
			}
		}
			
	}
	return 0;
}