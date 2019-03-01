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
	char y[501],s[501];
	double h;
	scanf("%lf",&h);
	scanf("%s",y);
	scanf("%s",s);
	int len=strlen(y),i,sum=0,l=strlen(s);
	if(len!=l)
	{
		printf("error");
	    return 0;
	}	
	for(i=0;i<len;i++)
	{
		if((y[i]!='A'&&y[i]!='T'&&y[i]!='C'&&y[i]!='G')||(s[i]!='A'&&s[i]!='T'&&s[i]!='C'&&s[i]!='G'))
		{
			printf("error");
			return 0;
		}
		else if(y[i]==s[i])
		{
			sum++;
		}
	}
	double p=(double)sum/len;
	if(p>h)
	{
		printf("yes");
		return 0;
	}
	printf("no");
	return 0;
}
