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
	char s[1000];
	int len,t,i,start[1000],endd[1000],max,min;
	
	gets(s);
	len=strlen(s);
	t=1;
	start[1]=0;
	for(i=1;i<len;i++)
	{
		if(s[i]==' ')
		{
			endd[t]=i-1;
			if(s[endd[t]]==',') endd[t]--;
			t++;
			start[t]=i+1;
		}
	}
	endd[t]=len-1;
	max=1;min=1;
	for(i=2;i<=t;i++)
	{
		if(endd[i]-start[i]>endd[max]-start[max])
			max=i;
		if(endd[i]-start[i]<endd[min]-start[min])
			min=i;
	}
	for(i=start[max];i<=endd[max];i++)
		printf("%c",s[i]);
	printf("\n");
	for(i=start[min];i<=endd[min];i++)
		printf("%c",s[i]);
	printf("\n");
	
	return 0;
}