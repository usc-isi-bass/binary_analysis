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

int f(int x,int y)
{
    int k=0,i;
    for(i=2;i<=x;i++)
    {
        k=(k+y)%i;
    }
    return k+1;
}
main()
{
      int n[20],m[20],i,king;
      for(i=0;i<=19;i++)
      {
           scanf("%d %d",&n[i],&m[i]);
           king=f(n[i],m[i]);
           if(n[i]!=0)
              printf("%d\n",king);
           else
              break;
      }
}
    

    
