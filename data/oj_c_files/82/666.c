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
    int n;
    int a,b;
    int j=0,k;
    scanf("%d",&n);
    int*pp;
    pp=(int*)malloc(sizeof(int)*n);
    if(n==1)
    {
            scanf("%d%d",&a,&b);
             if((a>=90)&&(a<=140)&&(b>=60)&&(b<=90))
             {
                   j++;
             }
             else
             {
                  j=0;
             }
             printf("%d",j);
    }
    else
    {
        for(k=0;k<n;k++)
        {
             scanf("%d%d",&a,&b);
             if((a>=90)&&(a<=140)&&(b>=60)&&(b<=90))
             {
                   j++;
             }
             else
             {
                  j=0;
             }
             *(pp+k)=j;
         }
         for(k=0;k<(n-1);k++)
         {
             if(*(pp+k)>=*(pp+k+1))
             {
                  *(pp+k+1)=*(pp+k);
             }
         }
         free(pp);
         printf("%d",*(pp+n-1));
    }  
    return 0;
}