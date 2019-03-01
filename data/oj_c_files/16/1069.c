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
     int a;
     scanf("%d",&a);
     int b;
     if(a==0) printf("0\n");
     else
     {
         while(a!=0)
         {
                b=a%10;
                a=a/10;
                printf("%d",b);
         }
         printf("\n");
     }
     getchar();
     getchar();
     getchar();
}
                
     
