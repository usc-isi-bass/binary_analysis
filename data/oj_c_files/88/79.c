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
      char s[30],num[30];
      gets(s);
      int l;
      l=strlen(s);
      int k=0;
      for (int i=0;i<l;i++)
      {
          if (s[i]>='0'&&s[i]<='9')
          {
              num[k]=s[i];
              k++;
          }
          else
          {
              if (k!=0)
              {
                       for (int j=0;j<k;j++)
                          printf("%c",num[j]);
                       printf("\n");
                       k=0;
              }
              else k=0;
          }
      }
      if (k!=0)
      {
         for (int j=0;j<k;j++)
            printf("%c",num[j]);
         printf("\n");
      }
      getchar();
      getchar();
}
