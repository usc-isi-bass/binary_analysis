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
      int n,j,y,len,k;
      char w, s[100000];
      scanf("%d",&n);
      int i;
      for(i=0;i<n;i++)
      {scanf("%s",s);
       len=strlen(s);
         for(j=0;j<len;j++)
           {for(k=0;k<len;k++)
              {if(k!=j&&s[j]==s[k])
                break;
              }
             if(k==len)
            {printf("%c",s[j]);
             printf("\n");
             break;}
           }         
             if(j==len)
              {printf("no");
              printf("\n");}
       }
        
       
}

