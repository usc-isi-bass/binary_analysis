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
	int i,j=0,a,b[52]={0};
	char s[301];
	scanf("%s",s);
	a=strlen(s);
    for(i=0;i<a;i++)
	{
		if(s[i]>=65&&s[i]<=90)
			b[s[i]-65]++;
		if(s[i]>=97&&s[i]<=122)
			b[s[i]-71]++;
	}
	for(i=0;i<26;i++)
	{
        if(b[i]>0)
		{
			j++;
			printf("%c=%d\n",i+65,b[i]);
	
		}
	}
	for(i=26;i<52;i++)
		if(b[i]>0)
		{
			j++;
			printf("%c=%d\n",i+71,b[i]);
		}
	if(j==0)
		printf("No");
	return 0;
}