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

int main ()
{
	int n;
	scanf("%d",&n);
	int i;
	struct point
	{
		char a[40];
	}words[1000];
	for(i=0;i<n;i++)
	{   
		scanf("%s",words[i].a);
		int b;
		b=strlen(words[i].a);
		if(i<n-1)
		{
			words[i].a[b]=' ';
		    words[i].a[b+1]='\0';
		}	
	}
	int num=0;
	for(i=0;i<n;i++)
	{
		num+=strlen(words[i].a);
        if(num+strlen(words[i+1].a)>81)
		{
				int k;
				k=strlen(words[i].a);
				words[i].a[k-1]='\n';
				words[i].a[k]='\0';
				num=0;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s",words[i].a);
	}
	return 0;
}
		
				
		