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
      char s[500];
      int i,j,k,l,t,m;
      scanf("%s",s);
      l=strlen(s);
      for(i=2;i<=l;i++)
      {
         for(j=0;j<=l-i;j++)
         { 
            t=1;
            for(k=j;k<j+i;k++)
            {
                if(s[k]!=s[j+j+i-1-k])
                {
                   t=0;
                   break;
                }
                if(t==0) break;
            }
            if(t==1)
            {
               for(m=j;m<j+i;m++)
               printf("%c",s[m]);
               printf("\n");
            }
         }
      }
}