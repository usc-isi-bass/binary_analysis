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
    int n;
    int p,q;
    int tmp;
    scanf("%d",&n);
    while(n--)    
    {
        int res=0;
        scanf("%d%d",&p,&q);
        for(int i=0;i<p;i++)
            for(int j=0;j<q;j++)
            {    
                scanf("%d",&tmp);
                if(i==0||j==0|i==p-1||j==q-1)
                    res+=tmp;
            }
        printf("%d\n",res);
    }
    return 0;
}