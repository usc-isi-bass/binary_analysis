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
	int str[500]={0
	};
	int n,i,j,k,flag;
    scanf("%d",&n);
    for(k=0;k<n;k++)
	{
		scanf("%d",&str[k]);
	}
    for(i=0;i<n;i++)
	{
		if(i==0)
		{
			printf("%d",str[0]);
        }
		if(i!=0) 
		{
			flag=1;
		    for(j=0;j<i;j++)
			{
				if(str[j]==str[i])
				{
					flag=0;
					break;
				}
			}
			if(flag==1)
			{
				printf(",%d",str[i]);
			}
		}
	
	}
	
	return 0;
}

