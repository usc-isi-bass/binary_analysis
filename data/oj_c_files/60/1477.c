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
    int spp(int p);
    int n,i;
    scanf("%d",&n);
    if(n<=4) printf("empty");
    else
    {    
        for(i=2;i<n;i++)
        {
            if(spp(i)==0)
            {
                if(spp(i+2)==0) printf("%d %d\n",i,i+2);
                else continue;
            }
        }
    }
    return 0;
}
int spp(int p)
{
    int j,k=0;
    for(j=2;j<p;j++)
    if(p%j==0) k=1;
    return(k);
}
