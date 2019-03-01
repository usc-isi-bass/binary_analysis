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
    int k1,k2,q,i,w,sum=0;
    double n,r;
    char dna1[501],dna2[501];
    scanf("%lf",&n);
    scanf("%s%s",dna1,dna2);
    k1=strlen(dna1);
    k2=strlen(dna2);
    if(k1!=k2)
    {
              printf("error");
              return 0;
    }
    else
    {
        for(i=0;i<k1;i++)
        {
                         q=dna1[i];
                         w=dna2[i];
                         if((q==65||q==84||q==67||q==71)&&(w==65||w==84||w==67||w==71))
                         {
                                if(q==w)
                                {
                                        sum++;
                                }
                         }
                         else
                         {
                             printf("error");
                             return 0;
                         }
        }
    }
    r=1.0*sum/k1;
    if(r>n)
    {printf("yes");}
    else
    {
        printf("no");
    }
    return 0;
}
