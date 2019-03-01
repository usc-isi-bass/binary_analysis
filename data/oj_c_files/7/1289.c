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
      char a[260];
      char b[260];
      char c[260];
      scanf ("%s",a);
      scanf ("%s",b);
      scanf ("%s",c);
      int len1=strlen(a);
      int len2=strlen(b);
      int len3=strlen(c);
      int i,j,length;
      for (i=0;i<len1;i++)
      {
          length=0;
          for (j=0;j<len2;j++)
          {
              if (a[i+j]==b[j]) length=length+1;
          }
          if (length==len2)
          {
              for (j=0;j<i;j++)
              {
                  printf ("%c",a[j]);
              }
              for (j=0;j<len3;j++)
              {
                  printf ("%c",c[j]);
              }
              for (j=i+len3;j<len1;j++)
              {
                  printf ("%c",a[j]);
              }
              printf ("\n");
              break;
          }
      }
      if (length!=len2) printf ("%s\n",a);
}