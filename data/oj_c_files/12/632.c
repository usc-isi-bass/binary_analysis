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
     int a[15] ;
     int i, NO, tmp , n ,j ; 
 while(1)
 {
   n=0;
   scanf("%d",&tmp);
   a[0]=tmp;
   if(tmp == -1) break;
  
   NO = 0;
  
   //for(i = 0; i < 101; i++) a[i] = 0; //a[i] ??i???? ? 0?????1???? ?????????? 

  // a[tm] = 1;
  
   while(1)
   {
    scanf("%d",&tmp);
    if(tmp==0)break;       
    a[++n] = tmp; // ???tmp??tmp??????1 
   }
   for(i = 0; i < n ; i++) 
    for( j=i+1 ; j<=n ; j++ )
      if( a[j]==2*a[i]||a[i]==2*a[j] )      NO++;
 
   printf("%d\n",NO);
 
 
 }
 getchar();
 getchar();
}
 
