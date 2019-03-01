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
	int n,i,m,mark;
	char a[81]={'\0'};
	char *p;
	scanf("%d",&n);
	gets(a);
	for(i=0;i<n;i++)
	{
		gets(a);
		m=strlen(a);
		for(p=a;*p!='\0';p++)
		{
			if((*p=='_')||(*p>='0'&&*p<='9')||(*p>='a'&&*p<='z')||(*p>='A'&&*p<='Z'))
				mark=1;
			else {mark=0;
			break;
			}
		}
		p=a;
		if(*p>='0'&&*p<='9')
			mark=0;
		printf("%d\n",mark);
	}
	return 0;
}
