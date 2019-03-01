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

int main(void)
{
     int n,h,l,i,j=0,k=0;
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
           scanf("%d %d",&h,&l);
           if((h<90)||(h>140)||(l<60)||(l>90)) j=0;
           if((h<=140)&&(h>=90)&&(l<=90)&&(l>=60)) 
           {j++;
            if(j>=k) k=j;}         
                      
     }
     printf("%d",k);
return 0;
}
