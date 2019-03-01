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
    int num[300];
    float average=0,temp,max=0;
    int i,n,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",num+i);
    
    for(i=0;i<n;i++)
        average+=num[i];
    average/=n;
    
    for(i=0;i<n;i++)
        {
         temp=fabs(average-num[i]);
         if(temp>max)
            max=temp;
         }
    for(i=0;i<n;i++)
        {
         if(fabs(fabs(num[i]-average)-max)<=0.001)
            {
             if(flag==0)
                flag=1;
             else 
                 printf(",");
             printf("%d",num[i]);
            }
        }
    return 1;
}                      
