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
	char s[50],w[50];
	int i,j,p,sLen,wLen,test=0;
	scanf("%s%s",s,w);
	sLen=strlen(s);
	wLen=strlen(w);

	for(j=0;j<wLen;j++)
	{
		p=j;
		if(s[0]==w[j])
		{
			for(i=1;i<sLen;i++,p++)
			{
				if(s[i]!=w[p+1])
				{
					break;
				}
				if(i==sLen-1)
				{
					printf("%d\n",j);
					test=1;
					break;
				}
			}
		}
		if(test==1)
		{
			break;
		}

	}
	return 0;
}