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
	int n,string,i,j,len,re=0;
	char str[100000],output='Z';
	scanf("%d",&n);
	for(string=0;string<n;string++)
	{
		scanf("%s",&str);
		len=strlen(str);
		for(j=0;j<len;j++)
		{
			for(i=0;i<len;i++)
			{
				if(str[i]==str[j])
				{
					re++;
				}
				if(re==2)
				{
					break;
				}
				if(i==len-1)
				{
					output=str[j];
					printf("%c\n",output);
				}
			}
			re=0;
			if(output!='Z')
			{
				output='Z';
				break;
			}else if(j==len-1&&output=='Z')
				printf("no\n");
		}
	}
	return 0;
}
