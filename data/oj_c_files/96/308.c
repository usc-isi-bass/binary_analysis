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

main()
{
      char input[100];
      int i,a,b,m;
      gets(input);
      b=input[0]-'0';
      
      m=input[1]-'0';
      if(b==1&&m<3&&input[2]=='\0')
     { printf("0");
      printf("\n%d%d",b,m);}
      
      else
      {     
             if(input[1]=='\0') printf("0\n%d",b);
           else
          {
           for(i=1;input[i]!='\0';i++)
           {
       
           a=(10*b+input[i]-'0')/13;
           b=(10*b+input[i]-'0')%13;
           if(a!=0||i!=1)
           printf("%d",a);
            }
           printf("\n%d",b);
          }  
       }    
        
       
       getchar(); 
     
       

 

}
