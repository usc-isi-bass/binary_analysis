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
      char a[100];
      int i,num,b[100];
      for(i=0;i<100;i++)
         b[i]=0;
      for(i=0;;i++)
      {
                   scanf("%c",&a[i]);
                   if(a[i]=='\n')
                   break;
      } 
      num=i;
      for(i=0;i<num-1;i++)
      {
            if((a[i]==' ')&&(a[i+1]==' '))
                b[i+1]=1;
      }
      for(i=0;i<num;i++)
      {
                        if(b[i]==0)
                        printf("%c",a[i]);
      }
}