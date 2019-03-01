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

int a(int k)
{
    if(k>0)
    return k;
    return -k;
}
int main()
{
    int num[300];
    int n,i,flag=1;
    int sum=0,max=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    scanf("%d",&num[i]);
    sum+=num[i];
    }
    for(i=1;i<=n;i++)
    {
                    if(max<a(num[i]*n-sum))
                    max=a(num[i]*n-sum);
    }
    for(i=1;i<=n;i++)
    {
                     if(max==sum-num[i]*n)
                     {
                                          if(flag==0)
                                          printf(",");
                                          flag=0;
                     printf("%d",num[i]);
                     }
    }
    for(i=1;i<=n;i++)
    {
                     if(max==-sum+num[i]*n)
                     {                    if(flag==0)
                                          printf(",");
                                          flag=0;
                     printf("%d",num[i]);
                     }
    }
    return 0;
}
