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

//????????????......by ??? 2011.11.10
//??????????? ????
int a[max],k;


int find(int p)  //???p?????????
{
    int i,temp=0,t;
    if (p==k-1) return 1;
    for (i=p+1;i<=k-1;i++)
    {
        if (a[p]>=a[i])
        {
            t=find(i);
            if (temp<t) temp=t;
        }
    }
    return temp+1;
}
main()
{
    int i,j,p=0,t,ans=0;
    scanf("%d",&k);
    for (i=0;i<=k-1;i++)
    scanf("%d",&a[i]);
    for (i=0;i<=k-1;i++)
     {
         t=find(i);
         if (ans<t) ans=t;
     }
    printf("%d",ans);

}