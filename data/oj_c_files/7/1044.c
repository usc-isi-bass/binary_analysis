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

main ()
{
  char a[3000];
  gets (a);
  char b[3000];
  gets (b);
  char c[3000];
  gets (c);
  int i,j,k,s,l=0;
  int count =0;
    for (k=0;b[k]!='\0';k++)
     l=l+1;
   for (i=0;a[i]!='\0';i++)
    {
      if (a[i]==b[0])
        {
           
           for (j=i,s=0;j<i+l,s<l;j++,s++)
             {
               if (a[j]==b[s])
                count++;
               
             
           if (count ==l)
                 {
                  for (j=i,s=0;j<=i+l-1&&s<=l-1;j++,s++)
                       a[j]=c[s];
                  
                 }
             }
        
        }
        
        
        
        
      }
     for (i=0;a[i]!='\0';i++)
      printf ("%c",a[i]);


 getchar();
 

}
