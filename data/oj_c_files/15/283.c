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
    int n,a[1000][1000],i,j,p,q,num1=0,num2=0,sum;
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
                    for(i=0;i<n;i++)
                                    scanf("%d ",&a[j][i]);            
                    }
    for(j=0;j<n;j++)
    {
                    for(i=0;i<n;i++)
                    {
                                    if(a[j][i]==0)
                                    {
                                                  num1++;
                                                  p=j;q=i;
                                    }
                    }
                    if(num1!=0)
                               break;
    }
    for(j=p;a[j][q]==0;j++)
    {
                 num2++;                 
                 }
    sum=(num1-2)*(num2-2);
    printf("%d",sum);
    return 0;    
}
