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
    int n,i;
    double jw,othr,othf,oths;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%lf%lf",&othr,&othf);
        if(i==0)jw=othf/othr;
        else {
               oths=othf/othr;
               if((oths-jw)<=0.05&&(jw-oths)<=0.05)
                  printf("same\n");
               else if(oths<jw)
                  printf("worse\n");
               else printf("better\n");
               }
               }
    return 0;
}