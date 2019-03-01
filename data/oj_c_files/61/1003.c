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
   int k,a=1,b,c=2,d=0,e=1,f,h[a];
   cin>>k;
   for(a=1;a<=k;a++)
      {cin>>b;
        if(b==1) h[a]=b;
        else
        for(c=2;c<=b;c++)      //??b????
        {   f=(d+e);
            d=e;
            e=f;
        }
           h[a]=e;
            e=1;
            d=0;
      }
      for(a=1;a<=k;a++)
      {cout<<h[a]<<endl;
      }
        return 0;
}
