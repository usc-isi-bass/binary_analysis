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
	int n,i,j,sum=0,k,len,h=0;
	scanf("%d",&n);
	char s[100005];
	for(i=0;i<n;i++)
	{
		scanf("\n%s",s);
		len=strlen(s);
		h=0;
		for(j=0;j<len;j++)
		{
			
			sum=0;
			for(k=0;k<len;k++)
			{
				if(k!=j&&s[j]==s[k])
				{
					sum++;
					break;	
				}	
			}	
			if(sum==0)
			{
				printf("%c\n",s[j]);
				h++;
				break;	
			}
		}
		if(h==0)
		{
			printf("no\n");	
		}
	}

	return 0;	
}
