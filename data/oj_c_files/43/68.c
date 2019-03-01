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

main()
{
      int a(int x);//????????? 
      int m,i,k;
      scanf("%d",&m);
      for(i=2;i<m/2+1;i++)
      {
                          if(a(i)==1&&a(m-i)==1)
                          printf("%d %d\n",i,m-i);
      }
      getchar();
      getchar();
}
int a(int b)
{
    int i,c=1;
    for(i=2;i<b;i++)
    {
                    if(b%i==0)
                    {
                          c=0;
                          break;
                    }
    }
    return(c);
}