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
	int i=1,s[10000];
	scanf("%d",&s[1]);
	if(s[1]==1)
	{
		printf("End");
	}
	else
	{
	    while(s[i]!=1)
		{
		     if(s[i]%2==0)
			 {
				 s[i+1]=s[i]/2;
			    printf("%d/2=%d\n",s[i],s[i+1]);
			 }
			 else
			 {
				 s[i+1]=s[i]*3+1;
				 printf("%d*3+1=%d\n",s[i],s[i+1]);
			 }
			 i++;
		}
		printf("End");
	}
	return 0;
}
