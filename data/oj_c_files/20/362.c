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
    char str[11],sub[4],*a,*b;
	int max,i,t,n;
	while(scanf("%s %s",str,sub)!=EOF)
	{
		max=0;
		a=str;b=sub;
		n=strlen(str);
		for(i=n-1;i>=0;i--)
		if(*(a+i)>=max)
		{
			t=i;
			max=*(a+i);
		}
		for(i=0;i<=t;i++)
			printf("%c",*(a+i));
		printf("%s",b);
		for(i=t+1;i<n;i++)
			printf("%c",*(a+i));
		printf("\n");
}
}