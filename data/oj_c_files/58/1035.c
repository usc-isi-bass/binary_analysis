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

int main()
{
      int n;
      scanf("%d\n",&n);
      int i,judge,l,j;
      char s[100];
      for (i=0;i<n;i++)
      {
          gets(s);
          judge=1;
          if (s[0]<'A'||s[0]>'Z')
            if (s[0]<'a'||s[0]>'z')
              if (s[0]!='_')
                judge=0;
          l=strlen(s);
          for (j=0;j<l;j++)
          {
              if (s[j]<'A'||s[j]>'Z')
                 if (s[j]<'a'||s[j]>'z')
                    if (s[j]<'0'||s[j]>'9')
                       if (s[j]!='_')
                       {   
                           judge=0;
                       }
          }
          printf("%d\n",judge);
      }
} 
