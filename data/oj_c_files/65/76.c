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


const int M = 200;
int main(int argc, char *argv[])
{
    int n;    
    scanf("%d",&n);
    int a[M],b[M];
    int an,bn;
    an =0;
    bn =0;
    for(int i = 0; i < n;i++)
    {
            scanf("%d %d",&a[i],&b[i]);
            if(a[i]== 0 && b[i]==1)
                      an++;
            if(a[i]==0 && b[i] == 2)
                       bn++;
            if(a[i]==1 && b[i] == 0)
                       bn++;
             if(a[i]==1 && b[i] == 2)
                       an++;
              if(a[i]==2 && b[i] == 0)
                       an++;
               if(a[i]==2 && b[i] == 1)
                       bn++;                    
    }
    if(an>bn)
             printf("A");
    if(an<bn)
             printf("B");
    if(an==bn)
              printf("Tie");
    
    return 1;
}
