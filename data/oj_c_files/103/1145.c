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
      char a[1000]={""};
      int num=1;
      int i,N;
      gets(a);
      N=strlen(a);
      i=0;
      do{
         if(a[i]==a[i+1]||a[i]-a[i+1]==32||a[i]-a[i+1]==-32)
          {
              num++;
              i++;
          }
          else
          {
              if(a[i]>'Z'){
                           a[i]=a[i]-32;
                           }
              printf("(%c,%d)",a[i],num);
              num=1;
              i++;
          }
          }
         while(i<N);
      
}
