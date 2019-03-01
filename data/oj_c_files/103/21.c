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
      int i,count=0,j,l;            
      char string[1000];
      scanf("%s",string);
      l=strlen(string);
      for(i=0;i<l;i++)
      {
            if(string[i]>='a'&&string[i]<='z')
             string[i]=string[i]-'a'+'A';
      }
      char s;
      s = string[0];
      for(i=0;i<l;i++)
      {
          if(string[i]==s)
             count++;
          else
          {
             printf("(%c,%d)",s,count);
             s = string[i];
             count=1;
          }
      }
      printf("(%c,%d)",s,count);                                                              
      getchar();
      getchar();
}                                                                                  
