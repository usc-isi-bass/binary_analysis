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

//******************************************
//*  ? ? ?:-1.2-                        * 
//*  ?    ?:???                       * 
//*  ????:10.6                         * 
//*  ????:??7?????              * 
int main()
{
  float n;
  int S=0;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    int xi,yi,zi;
    if(i%7!=0)
    {
       xi=i;
       if(floor(xi/10.0)!=7)
       {
         yi=xi;
         if(yi%10!=7)
         {
           zi=yi;
           S=S+zi*zi;
         }
       }
    }  
   }
   cout<<S<<endl;
   return 0;
}
       
    
     
