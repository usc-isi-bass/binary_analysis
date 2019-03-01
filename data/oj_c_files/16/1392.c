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
  int n,a[5];
  cin>>n;
  for(int i=0;i<5;i++)
     {
         a[i]=n%10;
         n=n/10;
         cout<<a[i];
         if(n==0) break;
         
      }
   return 0;
}
 