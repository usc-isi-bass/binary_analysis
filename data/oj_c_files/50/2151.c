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
{   int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int w,i,j,k;
    scanf("%d",&w);
    j=12;
    if((w+j)%7==5)
    printf("1\n");
    for(i=1;i<12;i++)
    {
        j=j+a[i-1];             
        if((w+j)%7==5)
        printf("%d\n",i+1);             
                     
                     
    }


    
return 0;    
    
}
