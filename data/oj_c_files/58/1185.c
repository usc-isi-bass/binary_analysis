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

void main()
{
	int n,i,pd=0;
	char zf[82],*ptr;
	scanf("%d ",&n);
	for(i=0;i<n;i++)
	{
		gets(zf);
		ptr=&zf[0];
		if((*ptr>='a'&&*ptr<='z')||(*ptr>='A'&&*ptr<='Z')||*ptr=='_')
			pd=pd;
		else
			pd++;
		ptr++;
		for(;*ptr!='\0';ptr++)
		{
			if((*ptr>='a'&&*ptr<='z')||(*ptr>='A'&&*ptr<='Z')||*ptr=='_'||(*ptr>='0'&&*ptr<='9'))
				pd=pd;
			else
				pd++;
		}
		if(pd!=0)
			printf("0\n");
		else
			printf("1\n");
		pd=0;
	}
}
