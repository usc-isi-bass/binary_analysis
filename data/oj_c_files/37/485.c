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
	int i,j,k,n,flag,flag1=0,t;
	char a[100],s;
        scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
                flag1=0;
		scanf("%s",a);
		for(j=0;a[j]!='\0';j++)
		{
			s=a[j];
			flag=0;
			for(k=0;a[k]!='\0';k++)
			{
				if((a[j]==a[k])&&(k!=j))
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				printf("%c\n",s);
				flag1=1;
				break;
			}
		
		}
		if(flag1==0)
		printf("no\n");
	}
	return 0;
}
