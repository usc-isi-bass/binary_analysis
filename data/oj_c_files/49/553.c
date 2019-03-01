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
      char a[800];
      int len,num=0;
      gets(a);
      len=strlen(a);
      for(int i=1;i<len;i++)
      {
              for(int j=0;j<len-i;j++)
              {
                     for(int k=j;k<=(j+i/2);k++)
                     {
                             if(a[k]==a[j+j-k+i])
                                num++;
                             else
                             {
                                 num=0;
                                 break;
                             }
                     }
                     if(num==i/2+1)
                     {
                                   for(int k=j;k<=i+j;k++)
                                    printf("%c",a[k]);
                                   printf("\n");
                     }
                     num=0;
              }
      }
}