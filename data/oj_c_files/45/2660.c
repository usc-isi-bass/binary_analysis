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
{int i,j,k,m,n,t;
 char a[50];char b[50];
 scanf("%s %s",a,b);
 for(i=0;;i++)
  {for(j=0;;j++)
    {if(a[i]==b[j])
       {t=j;m=i;n=j;
        for(m=i,n=j;;)
         {if(a[m]==b[n])
             {m++;n++;}
          if((m-i)==(strlen(a))) break;
         }
       }
      else continue;
      
      if((m-i)==(strlen(a))) break;
    
     }
     if((m-i)==(strlen(a))) break;
  }
  printf("%d",t);
} 
