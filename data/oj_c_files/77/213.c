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

void kuohao (char str[],int x);
int lenth;
char c;
int main()
{
    char a[10000];
    cin>>a;
    lenth=strlen(a);
    c=a[0];
    kuohao(a,1);
return 0;    
}
void kuohao(char str[],int x)
{
  if(x<lenth)
  {
      if(str[x]!=c)
      {
         int i=x-1,zuo=0,you=0;
         while(1)
         {
           if(str[i]==c)        
                zuo++;
           else 
                 you++;
           if(zuo==you+1)
              break;
           i--;                 
         }
         cout<<i<<" "<<x<<endl;
         kuohao(str,x+1);                          
      }  
       else 
          kuohao(str,x+1);            
  }        
}