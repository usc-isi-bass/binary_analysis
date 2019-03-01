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



void reverse( int a)
{
    int i,l,b;
    i=0;
    if (a==0)   printf("0");
    while ((a%10)==0)
        {a=a/10;}
    while (a!=0)
    {
                if (a>0)
                {
                         b=a%10;
                         printf("%d",b);
                           a=a/10;

                 }
                else if (a<0)
                 {
                        b=a%10;
                        if (i==0)
                        printf("%d",b);
                        else
                              {
                                  b=-b;
                               printf("%d",b);    
                               } 
                         a=a/10;
                         i++;
                  }
                

      }


    }

int main()
{
    int m,a;
    int i=1;
    while (i<=6)
    {scanf("%d",&a);
    reverse( a);
    printf("\n");
    i++;}

    getchar(); getchar(); getchar(); getchar(); getchar(); getchar(); getchar(); getchar();
}
 