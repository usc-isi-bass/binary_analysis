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



int k = 0;
int a[100];
int dp[100];

int solve()
{
	int ans = 0;

	dp[0] = 1;
	for(int i=1; i<k; i++)
	{
		dp[i] = 1;
		for(int j=0; j<i; j++)
		{
			if(a[j] >= a[i] && dp[j] + 1 > dp[i])
			{
				dp[i] = dp[j] + 1;
			}
		}
		if(dp[i] > ans)
		{
			ans = dp[i];
		}
	}

	return ans;
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	scanf("%d", &k);

	for(int i=0; i<k; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("%d\n", solve());

	return 0;
}