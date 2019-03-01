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

int a=0;

int main()
{
 for (int i=1;i<=6;i++)
 {cin>>a;
  if (a==0)cout<<0;
  else 
  {
  if (a<0){cout<<'-';a=-a;}
  
   int k=0;
   k=a%10;
   while (k==0){a=a/10;k=a%10;}
   while (a!=0){cout<<k;a=a/10;k=a%10;}
   }
   cout<<endl;
  }
return 0;
}
