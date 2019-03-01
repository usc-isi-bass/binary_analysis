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
    int m;
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
         int n;
         scanf("%d",&n);
         float s=0;
         int x=2,y=1,t;
         for(int j=1;j<=n;j++)
         {
              s=s+(float)x/y;
              t=x+y;
              y=x;
              x=t;
         }
         printf("%.3f\n",s);   
            
    }
    
    getchar();
    getchar();
}
