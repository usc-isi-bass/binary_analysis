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
    unsigned a[1000];
    char b[1000];
    scanf("%u",&a[0]);
    int i;
    i=0;
    while(1)
    {
            b[i]=getchar();
            if(b[i]!=',') break;
            i++;
            scanf("%u",&a[i]);
    }
    if(i==0) printf("No");
    else 
  {
        
             
        int num=i+1;
        unsigned max1,max2;
        max1=a[0];
        for(i=1;i<num;i++)
        {
            if(max1<a[i]) max1=a[i];
        }
   
   
        max2=a[0];
        if(max2==max1) max2=0;
         for(i=1;i<num;i++)
        {
            if(max2<a[i]&&a[i]<max1) max2=a[i];
        }
        if(max2==0) printf("No\n");
        else printf("%u\n",max2);
   }

    getchar();
    getchar();
    getchar();
}
    
