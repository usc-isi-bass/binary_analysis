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
      int k,m,n,s,i,max,j,c=0;
      int a[26],b[26];
      
     scanf("%d",&k);
     
      for(i=0;i<=k-1;i++)
     scanf("%d",&a[i]);
      b[k-1]=0;
     
      for(i=k-2;i>=0;i--)
       
       {
                        b[i]=0;
                        max=0;
              for(j=i+1;j<k;j++)
                      {
                                 if (a[i]>=a[j])
                                 {
                                   b[i]=b[j]+1;
                                   if (b[i]>max)
                                    max=b[i];
                                 }
                      }
                  
                  b[i]=max;
                  if (b[i]>=c)
                  c=b[i];
       } 
       printf("%d",c+1);
}
                        
                        
             