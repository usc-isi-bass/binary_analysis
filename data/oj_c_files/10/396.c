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
    int missile[25],k;
    int max[25],max1;
    int i,j;
    scanf("%d",&k);
    max[k-1]=1;
    for(i=0;i<k;i++)
        scanf("%d",&missile[i]);
    for(i=k-2;i>=0;i--)
       {
        max[i]=1;
        for(j=i+1;j<k;j++)
            if(missile[i]>=missile[j]&&max[i]<=max[j])
               max[i]=max[j]+1;
       }
    for(i=0,max1=0;i<k;i++)
        if(max[i]>max1)
           max1=max[i];
    printf("%d",max1);
    return 1;  
}         
                        
