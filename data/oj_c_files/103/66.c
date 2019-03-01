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
      char s[1000];
      int l,i,j=1;
      gets(s);
      l=strlen(s);
      for(i=0;i<l;i++)
      {
      if(s[i+1]==s[i]||s[i+1]==s[i]+32||s[i+1]==s[i]-32)
      j++;
      else
      {
          if(s[i]>='a'&&s[i]<='z')
          {printf("(%c,%d)",s[i]-32,j);
          j=1;}
          else
          {printf("(%c,%d)",s[i],j);
          j=1;}
      }
      }
      getchar();
      getchar();
      return 0;
      }
