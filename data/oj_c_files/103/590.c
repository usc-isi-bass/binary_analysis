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
{     int a,b,c,d;
      c=1;
      char str1[999],str2[999];
      scanf("%s",str1);
      a=strlen(str1);
      for(d=0;d<=a-1;d++)
      {
          if(str1[d]>='a' && str1[d]<='z')
          str2[d]=str1[d]-'a'+'A';
          else
          str2[d]=str1[d];
      }
      for (b=0;b<=a-1;b++)
      {   
          if(str2[b]==str2[b+1])
          c++;
          else
          {
              printf("(%c,%d)",str2[b],c);
              c=1;
          }
      }

}
