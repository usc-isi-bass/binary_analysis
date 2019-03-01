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
      int n,k,c,b[100],len,d;
      char a[100000];
      scanf("%d",&n);
for(k=1;k<=n;k++)
{     
      scanf("%s",a);
      len=strlen(a);
      for(c=0;c<=len-1;c++)
      {
          b[c]=0;
      }
      for(c=0;c<=len-1;c++)
      {
       for(d=0;d<=len-1;d++)
        {
            if (a[c]==a[d])
            b[c]++;
            else ;
        }
        //printf("%d\n",b[c]);
        if(b[c]==1)
           {
               printf("%c\n",a[c]);
               break ;
           }
        else ;
      }
      if (c==len)
      printf("no\n");
      else ;
      //for(c=0;c<=n-1;c++)
     // {
     //printf("%d\n",d[c]);
     //      }
     
}

}