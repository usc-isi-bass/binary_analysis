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
      char a[256],b[256],c[256];
      int i,j,n=0,m;
      gets(a);
      gets(b);
      gets(c);
      m=strlen(b);
      for(i=0;a[i]!='\0';i++)
      {
                             if(a[i]==b[0])
                             {
                                           for(j=1;j<m;j++)
                                           {
                                                                   if(a[i+j]==b[j])
                                                                      n++;
                                           }
                             }
                             if(n==m-1)
                             {
                                             for(j=0;j<m;j++)
                                             a[i+j]=c[j];
                                             break;
                             }
      }
      puts(a);
      getchar();
      getchar();
      getchar();
}