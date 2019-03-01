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

int main()                            //?????
{
 int n,i;                            //??????n i
 cin>>n;                             //???????
 if(n==0)                            //??0???0
    cout<<0;

 else 
    for(i=1;;i++)                     //?????
     {
       static int k;                 //??????k???10?k??
       if(i==1)                      //??????k
         k=10;                      
       else k*=10;                   
       if(n<k/10)                    //???i???????
         break;                      //???????????
       else                            
       {          
         int c=n%k;                  //?????????????
         cout<<c/(k/10);             //???i???
        }    
     }
	         
  return 0;
}