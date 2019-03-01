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
	char s[80],*h,*t,*f;
	int i,j,len,flag=1;
	scanf("%s",s);
	len=strlen(s);
	for(i=2;i<=len;i++)
	{
		f=s;
		for(;f<=(s+len-i);f++)
		{
			h=f;
			t=h+i-1;
			for(j=1;j<=(int)(i/2);j++,h++,t--)
			{
				flag=1;
				if(*h!=*t)
				{
					flag=0;
					break;
				}
			}
			if(flag)
			{
				h=f;
				for(;h<f+i;h++)
					printf("%c",*h);
				printf("\n");
			}
		}
	}
	return 0;
}