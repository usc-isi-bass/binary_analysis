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
      int n;
      scanf("%d",&n);
      int i;
      char a[10000][40];
      for (i=0;i<n;i++)
      {
          scanf("%s",a[i]);                   //???? 
      }
      int t,s=0;
      for (i=0;i<n;i++)
      {
         if(i==0)
         {
           t=strlen(a[i]);
           printf("%s",a[i]);                 //????????? ?s????????????? 
           s=s+t;
         }
         else
         {
           t=strlen(a[i]);
           s=s+t+1;
           if(s<=80)
           {
               printf(" %s",a[i]);                //??????????????80?????????? 
           }
           else
           {
               printf("\n");
               printf("%s",a[i]);             //?????80?????????s ?????????????? 
               s=t;                          
           }
         }
      }
      getchar();getchar();getchar();getchar();
}        
         