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

int a[1010],b[1010];
int main()
{
    int n;
    while(scanf("%d",&n),n)
    {
        for(int i=1; i<=n; i++)  scanf("%d",&a[i]);
        for(int i=1; i<=n; i++)  scanf("%d",&b[i]);
        sort(a+1,a+1+n);
        sort(b+1,b+1+n);
        int tl=1,tr=n,ql=1,qr=n;
        int sum=0;
        while(tl<=tr)
        {
            if(a[tl]<b[ql])
            {
                qr--;
                tl++;
                sum=sum-200;
            }
            else if(a[tl]==b[ql])
            {
                while(tl<=tr&&ql<=qr)
                {
                    if(a[tr]>b[qr])
                    {
                        sum+=200;
                        tr--;
                        qr--;
                    }
                    else
                    {
                        if(a[tl]<b[qr])  sum-=200;
                        tl++;
                        qr--;
                        break;
                    }
                }
            }
            else
            {
                tl++;
                ql++;
                sum=sum+200;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
