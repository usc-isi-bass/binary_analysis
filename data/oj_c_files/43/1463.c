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
    int i,m,j,sum;
    cin >> m;
    for(i=3;i<=m/2;i++)
   {
      sum=1;
        for(j=2;j<=(int)sqrt(i);j++)
        {
            if(i%j==0)
            {
             sum=sum*0;
            }
        }
        if(sum==1)
        {
          for(j=2;j<=(int)sqrt(m-i);j++)
          {
              if((m-i)%j==0)
              {
                  sum=sum*0;
              }
          }
        }
        if(sum==1)
        cout << i << " " << m-i << endl;
   }
return 0;
} 