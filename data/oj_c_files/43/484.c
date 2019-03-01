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
    int m,i,o,k,l;
    cin>>m;
    for(i=2;i<=(m/2);i++)
    {
       o=m-i;
       for(k=2;k<i;k++)
       {
          if (i%k==0) goto end;
          }
       for(l=2;l<o;l++)
       {
          if (o%l==0) goto end;
          }
       cout<<i<<" "<<o<<endl;
       end: continue;
       }
       return 0;
}
