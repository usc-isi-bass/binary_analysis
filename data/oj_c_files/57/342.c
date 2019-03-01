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
      int n;
      scanf("%d",&n);
      char a[100];
      char b[100];
      for(int i=0;i<n;i++)
      {
              scanf("%s",a);
              int m;
              m=strlen(a);
              if(a[m-2]=='l'||a[m-2]=='e')
              {
                             for(int k=0;k<m-2;k++)
                             {
                                  b[k]=a[k];
                             }
                             b[m-2]='\0';
              }
              if(a[m-3]=='i')
              {
                             for(int k=0;k<m-3;k++)
                             {
                                  b[k]=a[k];
                             }
                             b[m-3]='\0';
              }
              printf("%s\n",b);
      }
}
