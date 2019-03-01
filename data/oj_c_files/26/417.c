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
      char a[101];
      int i,k=0;
      gets(a);
      for(i=0;i<101;i++)
      {
                        if(a[i]==' '&&a[i+1]==' ')
                        a[i]='0';
      }
      for(i=0;i<101;i++)
      {
                        if(a[i]!='0'&&a[i]!=0)
                        printf("%c",a[i]);
                        else if(a[i]==0)
                        break;
      }
      getchar();
      getchar();
}
