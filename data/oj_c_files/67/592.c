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

//?????




int main()
{
    int n,all,valid;
    int i;
    double x,y;
    scanf("%d",&n);
     scanf("%d %d",&all,&valid);
     x=(double)valid/all;
    for(i=1;i<n;i++)
    {
                    scanf("%d %d",&all,&valid);
                    y=(double)valid/all;
                    if(x-y>0.05)
                    printf("worse\n");
                    if(y-x>0.05)
                    printf("better\n");
                    if(x-y<0.05&&y-x<0.05)
                    printf("same\n");
     }     
     getchar();
     getchar();         
    
}

 
 
