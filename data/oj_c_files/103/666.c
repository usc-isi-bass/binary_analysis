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
      char s[1001];
      char c; 
      int i;
      int n=1;
      gets(s);
      for(i=0;(s[i])!='\0';i++)
      {
       if (s[i]>='a'&&s[i]<='z')
       s[i]=s[i]-'a'+'A';
      }
      for(i=0;(s[i])!='\0';i++)
      {
        if (s[i]==s[i+1])
           n=n+1;
        else 
        {
        printf("(%c,%d)",s[i],n);
        n=1;
        }
      }
}



 
