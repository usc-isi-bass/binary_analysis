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
      char a[101],b[101];
      int n,i,j=0;
          gets(a);
      n=strlen(a);
                  for(i=0;i<n-1;i++)
                                  { if(a[i]==' '&&a[i+1]==' ')
                                    continue;
                                    else 
                                      {b[j]=a[i];
                                       j++;
                                      }
                                  }
      if (a[n-1]==' ' )
      b[j]='\0';
      else 
      {b[j]=a[n-1];
       b[j+1]='\0';
      }
      puts(b);
      getchar();
}