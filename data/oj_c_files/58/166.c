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
      int n,i,j,l,x=1;
      char c[1000],s[10];
      gets(s);
      n=atoi(s);
      for(i=0;i<n;i++)
      {
          gets(c);
          l=strlen(c);
          for(j=0;j<l;j++)
          {
                          if(j==0)
                          {
                                  if(c[0]=='_'||(c[0]>='a'&&c[0]<='z')||(c[0]>='A'&&c[0]<='Z'))
                                  x=1;
                          else
                          {
                              x=0;
                              break;
                          }
                          }
                          else if(c[j]=='_'||(c[j]>='a'&&c[j]<='z')||(c[j]>='A'&&c[j]<='Z')||(c[j]>='1'&&c[j]<='9')||c[j]=='0')
                          x=1;
                          else
                          {
                              x=0;
                              break;
                          }
          }
          if(x==0)
          printf("0\n");
          else
          printf("1\n");
      }
      getchar();
      getchar();
}
