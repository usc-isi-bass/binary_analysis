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
    int n,i,j,l,b;
    int s[10000];
    scanf("%d",&n);
    scanf("%d %d",&i,&j);
    b=0;
    for (l=0;l<n;l++)
        s[l]=0;
    while ((i!=0)||(j!=0))
          {
                         s[j]++;
                         if (s[j]==n-1)
                         {
                            printf("%d\n",j);
                            b++;
                         }
          scanf("%d %d",&i,&j);
          }
    if (b==0)
       printf("NOT FOUND");
}
            