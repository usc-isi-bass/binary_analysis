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
   int a[1001];
   memset(a,0,sizeof(a));
   int i,j,k,n;
   int p = 0;
   cin >> n ;
   a[1] = 2 ;
   if(n == 0)
   {
     cout << "1";
   }
   else
   {
   for(i = 1; i< n; i++)
   {   
       p = 0;
     for(j = 1; j <=1000; j ++)   
     {
         a[j] = a[j] * 2 + p ;
         p = a[j] / 10;
         a[j] = a[j] % 10;
     }     
   }
   for( i = 1000; a[i] == 0 ; i-- );
       k = i ;
   for(i = k ;i >= 1 ; i -- )
   {
       cout<<a[i];
   }
   }   
     return 0 ;
}  