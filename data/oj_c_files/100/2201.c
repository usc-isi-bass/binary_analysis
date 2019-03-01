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
	char str[301],s[60]="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz",*ps,*pt;
	int count=0,t;
	scanf("%s",str);
	for(ps=s;*ps!='\0';ps++)
	{
		t=0;
		for(pt=str;*pt!='\0';pt++)
		{
			if(*pt==*ps)
			{
				t++;
			    count++;
			}
		}
		if(t>0)
			printf("%c=%d\n",*ps,t);
	}
	if(count==0)
		printf("No");

	return 0;
}