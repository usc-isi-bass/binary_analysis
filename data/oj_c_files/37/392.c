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
	char s[100005],*p,*q;
	int n,i,k,t;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		gets(s);
		t=strlen(s);
		k=0;
		for(p=s;p<s+t&&k==0;p++)
		{
			k=1;
			if(*p!='0'&&*p!='\0')
			{
				q=p+1;
				while(q<s+t)
				{
					if(*q!=*p)
						q++;
					else 
					{
						*q='0';
						k=0;
						q++;
					}
				}
				if(k)
					printf("%c\n",*p);
			}
			else k=0;
		}
	}
		if(k==0)
			printf("no");
}