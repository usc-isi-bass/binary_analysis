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
      char a[1001],b[1001];
      int c[1001],i,m,M;
    
      scanf("%s",a);
      
     
      for(i=0;a[i]!=0;i++){
                               
         if('a'<=a[i]&&a[i]<='z')
            a[i]=a[i]-'a'+'A';
      }
            
    
        
       for(i=0,m=0,c[m]=1,b[m]=a[0];a[i+1]!=0;i++){
       
            if(a[i]==a[i+1])
               c[m]++;
               
            else
              {m++; 
              b[m]=a[i+1];
              c[m]=1;
             }
         
       }
       M=m;
       for(m=0;m<=M;m++){
       printf("(%c,%d)",b[m],c[m]);}
       
}
