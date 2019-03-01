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

int main(int argc, char* argv[])
{
    int n,i,m,count=0,k=0;
	char c[40];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",c);
        m=strlen(c);
		
		count=count+m+1;
		if(count-1>80)
		{
			printf("\n%s",c);
			count=m+1;
			
		}
		else
		{
			if(k==0)
			{
              printf("%s",c);
			  k=1;
			}
			else
			printf(" %s",c);
		}
	}
	return 0;
}