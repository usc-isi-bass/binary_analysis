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
   char a[300],b[300],c[300];
   scanf("%s%s%s",a,b,c);
   int a1,b1,c1;
   int i,j,k;
   a1=strlen(a);  
    b1=strlen(b);  
     c1=strlen(c);
     for(i=0;i<=a1-1;i++)
        {
           for(j=0;j<=b1-1;j++)
              {
                if(a[i+j]!=b[j]) break;                
              }  
             if(j==b1)   {break;}               
        } 
        
if(i>=a1)   printf("%s",a); 
else{  
     for(k=0;k<i;k++)
        {printf("%c",a[k]);}
     printf("%s",c);
     for(k=i+b1;k<=a1-1;k++)
     printf("%c",a[k]);
}
}