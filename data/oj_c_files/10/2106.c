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



int n;
int d[100];
int dp[30];

int main()
{
    while(scanf("%d", &n) == 1)
    {
        for(int i = 1; i <= n; i++)
            scanf("%d", d + i);    
        
        d[0] = (-1u)>>1;
        for(int i = 1; i <= n; i++)
        {
            dp[i] = 0;
            for(int j = 0; j < i; j++)
                if(d[j] >= d[i]) 
                    dp[i] = max(dp[i], dp[j] + 1);   
        }
        
        int ans = 0;
        for(int i = 1; i <= n; i++)
            ans = max(ans, dp[i]);
            
        printf("%d\n", ans);
    }    
    return 0;    
}
