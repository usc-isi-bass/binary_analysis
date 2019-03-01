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
    int n,i,t,j,k=0,l,cnt;
    long a[2500];
    scanf("%d",&n);
    if(n<5)
        printf("empty");
    else
    {
        for(i=3;i<=n;i++)
        {
            cnt=0;
            t=(int)sqrt(i);
            for(j=2;j<=t;j++)
            {
                if(i%j==0)
                    cnt++;
            }
            if(cnt==0)
            {
                a[k]=i;
                k++;
            }    
        }
        for(l=1;l<=2500;l++)
        {
            if(a[l]-a[l-1]==2)
            printf("%d %d\n",a[l-1],a[l]);
        }
    }
    getchar();
    getchar();
}