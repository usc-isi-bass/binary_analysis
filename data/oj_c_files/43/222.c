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
     int m,i,j,a,b;
      scanf("%d",&m);
     for(i=1;i<=m/2;i++)
     {
               a=2;         
          while(i%a!=0&&a<=i) 
            a++;
         if(a==i){
                    b=2;
           while(((m-i)%b!=0)&&(b<=m-i)) 
              b++;
         if(b==m-i) 
           printf("%d %d\n",i,m-i);
             }
         }
    return 0;
}