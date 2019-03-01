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
      char s[2000];
      gets(s);
      int i;
      for(i=0;s[i]!='\0';i++)
      {if(s[i]>=48&&s[i]<=57&&s[i+1]>=48&&s[i+1]<=57)
      printf("%c",s[i]);
      if(s[i]>=48&&s[i]<=57&&(s[i+1]<48||s[i+1]>57))
      printf("%c\n",s[i]);}
      getchar();
      getchar();
      return 0;
      }
