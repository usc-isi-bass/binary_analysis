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
      char word[1000][50]={'\0'};
      int i,n,sum,len;
      scanf("%d",&n);
      
      for(i=0;i<n;i++)
          scanf("%s",word[i]);
      printf("%s",word[0]);
      sum=strlen(word[0]);
      for(i=1;i<n;i++)
      {
          len=strlen(word[i]);
          sum+=len+1;
          if(sum<=80)
          {
              printf(" %s",word[i]);
              
          }
          else
          {
              printf("\n");
              printf("%s",word[i]);
              sum=strlen(word[i]);
          }
      }

}
