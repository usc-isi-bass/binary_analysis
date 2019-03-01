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

int main(void)
{  
   int num;
   int i,j;
   int data[30];
   int dp[30];  
   int max;
   memset(dp,0,sizeof(dp));
   scanf("%d",&num);
   for(i=0;i<num;i++)
		scanf("%d",&data[i]);
   dp[0]=1;
   for(i=1;i<num;i++)
   {    
	   max=1;
		for(j=0;j<i;j++)
        {  
			if((data[i]<=data[j])&&(dp[j]+1>max))
			  max=dp[j]+1;
		}
		dp[i]=max;
   }
   for(i=0;i<num;i++)
	   if(dp[i]>max)
		   max=dp[i];
   printf("%d\n",max);
   return 0;
}