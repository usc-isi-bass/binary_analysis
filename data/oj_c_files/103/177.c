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
      char str[1000];
      int i,sum;
      gets(str);
      i=0;
      sum=1;
      while(str[i]!='\0')
      {
          while(str[i]==str[i+1]||str[i]==str[i+1]+32||str[i]==str[i+1]-32)
          {
          sum=sum+1;
          i=i+1;
          }
      if (str[i]>='a'&&str[i]<='z')
      str[i]=str[i]-32;
      printf("(%c,%d)",str[i],sum);
      i=i+1;
      sum=1;
      }
      getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();
}