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
    void dx ( char str[]);
    int j;
    char str[100];
    for(j=1;j<=6;j++)
      {
        cin.get(str,100,'\n');
        dx (str);
        getchar();
      }    
    
    
    return 0;
}

   void  dx ( char str[])
   {
     int i=0;
     if(str[0]=='-')
      {
       cout<<str[0];
       for(i=strlen(str)-1;i>=1;i--)
         if(str[i]==48) continue;
         else break;
       for(i;i>=1;i--)
         cout<<str[i];
       cout<<endl;
       } 
      else
        {
          for(i=strlen(str)-1;i>=1;i--)
            if(str[i]==48) continue;
          else break;
          for(i;i>=0;i--)
              cout<<str[i];
          cout<<endl;
        }
     }
     