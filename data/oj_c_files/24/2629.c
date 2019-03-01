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
	char s[200][100]={""};
	int n,i,len[200]={0},*p,*max,*min;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",&s[i]);
		len[i]=strlen(s[i]);
	}
	p=&len[0];
	max=&len[0];
	min=&len[0];
    for(i=0;i<n;i++)
    {
		if(*(p+i)>*max)
			max=p+i;
		else if(*(p+i)<*min)
			min=p+i;
	}
		for(i=0;i<n;i++)
		{
			if(*(p+i)==*max)
			{
				printf("%s\n",s[i]);
				break;
			}
		}

		for(i=0;i<n;i++)
		{
			if(*(p+i)==*min)
			{
				printf("%s",s[i]);
				break;
			}
		}


	return 0;
}