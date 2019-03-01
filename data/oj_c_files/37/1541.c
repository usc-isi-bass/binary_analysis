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
	int t,length;
	char a[100005];
	int i,j,k,l;
	scanf("%d",&t);
	for(i=0;i<=t;i++)
	{
	    gets(a);
		length=strlen(a);
		for(j=0;j<length;j++)
		{
			l=0;
			for(k=0;k<length;k++)
			{
				if(a[j]==a[k])
				{
					l+=1;
				}
				if(l==2)
				{
					break;
				}
			}
			if(l==1)
			{
                printf("%c\n",a[j]);
				break;
			}
			if(j==length-1&&l==2)
			{
				printf("no\n");
			}
			
		}
        
	}

	return 0;
}
