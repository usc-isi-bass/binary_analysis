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
   int a[5],i=0,k,num;        //a[5]???????????,i,k????,num?????????
   cin>>num;
   do{
        a[i]=num%10;            
        num=num/10;            
        i++;                   
      }while(num!=0);           
   k=i;
   for(i=0;i<k;i++)                
     cout<<a[i];          
}
  
