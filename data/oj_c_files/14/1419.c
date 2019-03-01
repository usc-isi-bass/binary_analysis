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
   int n,i,j,q,w;
   scanf("%d",&n);
   int a[n],b[n],c[n],d[n];
   for(i=0;i<n;i++)
   {scanf("%d %d %d",&a[i],&b[i],&c[i]);
                    
                    }
     for(i=0;i<n;i++)
   {      d[i]=b[i]+c[i];
                    
                    }
    for(i=0;i<3;i++)
   {      for(j=i+1;j<n;j++)
   {       if(d[i]<d[j])
         {q=d[i];
         d[i]=d[j];
         d[j]=q;
         w=a[i];
         a[i]=a[j];
        a[j]=w;}
        
         
         
          
          }
                    
                    }
                       for(i=0;i<3;i++)
   {    printf("%d %d\n",a[i],d[i]);
                    
                    }
                    
      

    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
    

}
