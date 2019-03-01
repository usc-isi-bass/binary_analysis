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
      char a[1002];
      gets(a);
      int b=1;
      int i;
      for( i=0; a[i]!='\0';i++)
      {
           if('a'<=a[i]&&a[i]<='z')
           a[i]=a[i]-'a'+'A';
      }
      for( i=1; a[i]!='\0';i++)
      {
              if((a[i]==a[i-1]))
              b=b+1;
              else 
              {
                   printf("(%c,%d)",a[i-1],b);
                   b=1;
              }
      }
      printf("(%c,%d)",a[i-1],b);
      getchar();
      getchar();
}
