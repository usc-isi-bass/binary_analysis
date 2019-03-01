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

main()
{
    int k;
    int a[26]={0},b[26]={0};
    int i,j,r;
    scanf("%d",&k);
    for(i=1;i<=k;i++)
        scanf("%d",&a[i]);
    for(i=k;i>=1;i--)
    {
        r=0;
        for(j=i;j<=k;j++)
        {
            if(a[i]>=a[j])
                r=b[j]+1;
            if(b[i]<r) b[i]=r;
        }
    }
    r=0;
    for(i=1;i<=k;i++)
        if(b[i]>r) r=b[i];
    printf("%d",r);
}
