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

void father(int x,int y)
{
     int r1=0,r2=0;
     for (int i=1;i<12;i++)
     {
           if (x-pow(2,i-1) < pow(2,i-1) && x-pow(2,i-1)>=0)
           r1=i;
           if ((y-pow(2,i-1)) < pow(2,i-1) && (y-pow(2,i-1))>=0)
           r2=i;
           if (r1!=0 && r2!=0)
               break;
      }
      if (r1>r2)
            x=x/pow(2,r1-r2);
      else if (r1<r2)
            y=y/pow(2,(r2-r1));
      if (x==y)
             cout <<x<<endl;
      else
            father(x/2,y/2);
}
int main()
{
     int m,n;
     cin >>m>>n;
     father(m,n);
     return 0;
}
