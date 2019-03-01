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
	int n,i,k,j,t;
	char str[32];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",str);
		k=strlen(str);
		if(str[k-1]=='r'||str[k-1]=='y')
		{
			for(j=0;j<k-2;j++)
				{
					if(j<k-3)
					printf("%c",str[j]);
					if(j==k-3)
					printf("%c\n",str[j]);
			    }
		}
		if(str[k-1]=='g')
		{
			for(j=0;j<k-3;j++)
			{
				if(j<k-4)
				printf("%c",str[j]);
				if(j==k-4)
				printf("%c\n",str[j]);
			}
		}	
	}
	return 0;
}