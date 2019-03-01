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
    int i,n,shousuoya,shuzhangya,hour=0,c=0;
    cin >> n;
    
  for(i=1;i<=n;i++)
 {
   cin >> shousuoya >> shuzhangya;
   if(shousuoya>=90 && shousuoya<=140 && shuzhangya>=60 && shuzhangya<=90)
   {
    hour+=1;
   }
   else
   {
    if(hour>=c)
    { 
      c=hour;
      hour=0;
    }
    else
   {
     hour=0;
    }
   }
 }
if(hour>=c)
 {
   c=hour;
 }
 cout << c << endl;
return 0;
}