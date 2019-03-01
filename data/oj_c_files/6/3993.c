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



const int maxn = 110;
int n, m;
int d[maxn][maxn];

int main()
{
    int t;
    
    scanf("%d", &t);
    while(t-->0)
    {
        int sum = 0;
        scanf("%d%d", &n, &m);
        for(int i = 0; i < n; i++) 
            for(int j = 0; j < m; j++)
            {
                int tmp;
                scanf("%d", &tmp);    
                if(i == 0 || i == n-1 || j == 0 || j == m - 1)
                    sum += tmp;
            }  
            
        printf("%d\n", sum);
    }
 return 0;    
}
