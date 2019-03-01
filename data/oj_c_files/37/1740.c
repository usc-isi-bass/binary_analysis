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
    int t,p,i,b,c;
    char a[100][10000] ;
    scanf("%d",&t);
    for(p=0;p<t;p++)
    {
                    scanf("%s",a[p]);
                    } 
        for(p=0;p<t;p++)
        { 
                             c=0;
                             int d=strlen(a[p]);
                             for(i=0;i<d;i++)
                             {
                             b=0;
                             for(int q=0;q<d;q++)
                             {
                                     if(a[p][q]==a[p][i])
                                     b++;
                                     else;
                                     }
                              if(b==1) 
                              {
                              printf("%c\n",a[p][i]);
                              c++;
                              break;
                              }
                              else;
                              }
        if(c==0)
        printf("no\n");
        }
}   