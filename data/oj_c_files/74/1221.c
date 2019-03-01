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
    int m,n,i,j,k,digit,res=0,t,cnt1=0,cnt2=0;
    scanf("%d %d",&m,&n);
    for(i=m;i<=n;i++)
    {
        cnt1=0;
        t=(int)sqrt(i);
        for(j=2;j<=t;j++)
        {
            if(i%j==0)
                cnt1++;
        }
        if(cnt1==0)
        {
            k=i;
            res=0;
            while(k)
            {
                digit=k%10;
                res=res*10+digit;
                k/=10;
            }
            if(res==i)
            {
                if(cnt2==0)
                {
                    printf("%d",res);
                    cnt2++;
                }
                else
                {
                    printf(",%d",res);
                    cnt2++;
                }
            }
        }
    }
    if(cnt2==0)
    printf("no");
}