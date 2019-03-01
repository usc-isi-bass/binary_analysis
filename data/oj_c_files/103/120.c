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
      int i,l,c;
      scanf("%s",&s);
      l=strlen(s);
      c=0;
      for(i=0;i<=l-1;i++)
      {
          if((s[i]>='a')&&(s[i]<='z'))
          s[i]=s[i]-'a'+'A';
      } 
      for(i=0;i<=l-1;i++)
      {   if((s[i]==s[i+1])&&(i<l)) 
          {c=c+1;}
          else 
          if((s[i]==s[i+1])&&(s[i+2]=='\0')) printf("(%c,%d)",s[i],c);
          else
          {printf("(%c,%d)",s[i],c+1);
           c=0;}
      }
      getchar();
      getchar();
}
