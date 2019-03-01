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
	char c[100];
	int len,i,j,a[100];
	while(scanf("%s",c)!=EOF)
	{
		if(c[0]=='\0')  break;
		printf("%s\n",c);
		len=strlen(c);
		for(i=0;i<len;i++)
		{
			if(c[i]=='(')
				a[i]=-1;
			else 
				if(c[i]==')')
				{
					a[i]=1;
					for(j=i-1;j>=0;j--)
					{
						if(a[j]==-1)
						{
							a[j]=0;
							a[i]=0;
							break;
						}
					}
				}
				else a[i]=0;
		}
		for(i=0;i<len;i++)
		{
			if(a[i]==-1)
				printf("$");
			if(a[i]==1)
				printf("?");
			if(a[i]==0)
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
		
	




