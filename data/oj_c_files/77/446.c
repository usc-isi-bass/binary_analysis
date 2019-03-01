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


void f(int n,int *a,char *b,char boy, char girl)
{
     int i;
     if(n==2)printf("%d %d\n",*a,*(a+1));
     else
     {
         for(i=0;i<n;i++)
         {
                         if(*(b+i)==boy&&*(b+i+1)==girl)
                         {
                              printf("%d %d\n",*(a+i),*(a+i+1));
                              break;
                         }               
         }
     
         for(;i<n-2;i++)
         {
         *(a+i)=*(a+i+2);
         *(b+i)=*(b+i+2);
         }
         f(n-2,a,b,boy,girl);
     }
}

int main()
{
    int a[1000],geshu,i;
    char b[1000];
    char boy,girl;
    gets(b);
    geshu=strlen(b);
    for(i=0;i<geshu;i++)a[i]=i;
    boy=b[0];
    girl=b[geshu-1];
    f(geshu,a,b,boy,girl);
}
    
