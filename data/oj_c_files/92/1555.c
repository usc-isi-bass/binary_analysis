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

int compare(const void*elem1,const void*elem2)
{
    return(*(int*)elem1-*(int*)elem2);
}
main()
{
    int n,max,sum,i,j;
    int a[2000],b[1000];
    for(;;)
    {
        sum=0;
        scanf("%d",&n);
        if(n==0)
        break;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        scanf("%d",&b[i]);
        qsort(a,n,sizeof(int),compare);
        qsort(b,n,sizeof(int),compare);
        for(i=0;i<n;i++)
        a[i+n]=a[i];
        max=-n;
        for(i=0;i<n;i++)
        {
            sum=0;
            for(j=0;j<n;j++)
            {
                if(a[i+j]<b[j])
                sum--;
                else if(a[i+j]>b[j])
                sum++;
            }
            if(sum>=max)
            max=sum;
        }
        max=max*200;
        printf("%d\n",max);
    }
}
