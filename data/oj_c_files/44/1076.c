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

int reverse  (int num)
{
    int a[12];
    int i,j,k,p;
    if(num==0)
    {
        printf("0");
    }
    else
    {
        if(num>0)
        {
            a[0]=1;
        }
        if(num<0)
        {
           a[0]=0;
           num=0-num;
        }
        if(a[0]==0)
        {
           printf("-");
        }
        for(i=1;num!=0;i++)
        {
           a[i]=num%10;
           num=(num-a[i])/10;
        }
        a[i]=10;
        for(j=1;a[j]==0;j++)
        {
           p=1;
        }
        for(k=j;a[k]!=10;k++)
        {
           printf("%d",a[k]);
        }
        printf("\n");
    }
    return 0;
}
main()
{
    int a,i;
    for(i=1;i<=6;i++)
    {
        scanf("%d",&a);
        reverse(a);
    }
}