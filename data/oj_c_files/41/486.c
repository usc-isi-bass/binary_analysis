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

int a[5];
int j;
void f(int m)
{
   for(int i=1;i<6;i++) 
   {
        if(m==0) 
        {
             a[m]=i;
             f(m+1);
        }
        else
        {
             for(j=0;j<m;j++)
             {
             if(i==a[j]) break;
             }
             if (j==m) 
             {
             a[m]=i;
             if (m!=4) f(m+1); 
             else 
             {
                 if((((a[0]==1||a[0]==2)&&(a[4]==1))||((a[0]==3||a[0]==4||a[0]==5)&&a[4]!=1))&&(a[4]!=2&&a[4]!=3)&&(a[1]==2)&&(((a[2]==1||a[2]==2)&&(a[0]==5))||((a[2]==3||a[2]==4||a[2]==5)&&a[4]!=5))&&(((a[3]==1||a[3]==2)&&(a[2]!=1))||((a[3]==3||a[3]==4||a[3]==5)&&a[2]==1))&&(((a[4]==1||a[4]==2)&&(a[3]==1))||((a[4]==3||a[4]==4||a[4]==5)&&a[3]!=1)))
                 for(int y=0;y<5;y++) 
                 {
                      printf("%d",a[y]);
                      if(y!=4) printf(" ");
                      else printf("\n");
                 }
             }
             }
             
        }
   }
}
main()
{
     void f(int a);
     f(0); 
}