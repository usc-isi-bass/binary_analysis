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


int max(int x,int y)
{
	if(x>y)
	return x;
	else return y;
	
	}
int main()
{   int num[30];
int r=0;
int dp[30]={0};

	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	 {scanf("%d",&num[i]);
	  dp[i]=1;
	}
	for(int i=2;i<=n;i++)
	 for(int j=1;j<i;j++)
	if(num[i]<=num[j])
	 {dp[i]=max(dp[i],dp[j]+1);
     if(dp[i]>r)
      r=dp[i];
}
	printf("%d",r);
	}
