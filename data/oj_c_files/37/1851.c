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
      int m,j;
      scanf("%d",&m);
      for(j=0;j<m;j++)
      {
      int n=0;
      char s[1000];
      scanf("%s",s);
      int l;
      int i;
      l=strlen(s);
      int b[1000]={0};
      for(i=0;i<l;i++)
      {
                      b[s[i]]++;
      }
      for(i=0;i<l;i++)
      {
                      if(b[s[i]]==1)
                      {
                                    printf("%c\n",s[i]);
                                     n=1;
                                    break;
                                   
                      } 
      }
      if(n==0)
      printf("no\n");
      }
      }
