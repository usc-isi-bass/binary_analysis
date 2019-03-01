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
      char a[10000];int b[10000]={0};
      int i=0,j,p;
      gets(a);
      for(j=0;a[i]!='\0';i++)
      {
                             if(a[i]!=' ')
                             {
                             b[j]++;
                             }
                             else
                             {
                             if(b[j]!=0)
                             printf("%d,",b[j]);
                             j++;
                             }
      }
      printf("%d",b[j]);
    
}
