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
   int n,i;//i??????? 
   cin>>n;//n???????? 
   int s[n],m[n]; 
   for(i=0;i<=n-1;i++)
   {
   cin>>s[i];                   
   }
   for(i=0;i<=n-1;i++)
   {
   m[i]=s[n-1-i];                   
   }
   for(i=0;i<=n-1;i++)
   {
   if(i!=0) 
   cout<<" "<<m[i];
   if(i==0)
   cout<<m[0];                   
   }
    
    
    
return 0;    
}
