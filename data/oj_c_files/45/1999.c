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
	char s[N],w[N];
	int dis_len;
	int i,j,sum=1;
	scanf("%s",&s);
	scanf("%s",&w);
	dis_len=strlen(w)-strlen(s)+1;
	for(i=0;i<dis_len;i++)
	{
		for(j=0;j<strlen(s);j++)
		{
			if(s[j]!=w[i+j])
			{
				sum=0;
				break;
			}
		}
		if(sum==1)
		{
			printf("%d\n",i);
			break;
		}
		else
		{
			sum=1;
		}
	}
	return 0;
}