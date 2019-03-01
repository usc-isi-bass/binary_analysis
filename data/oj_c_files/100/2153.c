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
	char s[301],t;
	int i,j,n=0,b=0,num;

	gets(s);
	num=strlen(s);
	
	for(i=0;i<num;i++)
	{
		if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
			b=b+1;
	}
	if(b==0)
		printf("No");
	else
	{
		for(t='A';t<='Z';t++)
		{
			n=0;
			for(i=0;i<num;i++)
			{
				if(s[i]==t)
					n=n+1;
			}
			if(n!=0)
			printf("%c=%d\n",t,n);
		}

		for(t='a';t<='z';t++)
		{
			n=0;
			for(i=0;i<num;i++)
			{
				if(s[i]==t)
					n=n+1;
			}
			if(n!=0)
			printf("%c=%d\n",t,n);
		}
	}

	return 0;
}

