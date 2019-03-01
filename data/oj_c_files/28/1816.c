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

char s[100000];
int main()
{
	int l,i,start,end;
	gets(s);
	l=strlen(s);
	start=0;
	end=0;
	while(1)
	{
		for(i=start;i<l;i++)
		{
			if(s[i]==' ')
			{
				end=i;break;
			}
			if(i==(l-1))
			{
				end=l;break;
			}
		}
		if(start==0) printf("%d",end);
		else printf(",%d",end-start);
		if(end==l) break;
		for(i=end;;i++)
		{
			if(s[i]!=' ')
			{
				start=i;break;
			}
		}
		end=start;
	}
	return 0;
}