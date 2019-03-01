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
      char b[101];
      int i;
      int j;
      int count=1;
      int c;
      gets(a);
      c=strlen(a);
      for(i=0;i<101;i++)
      b[i]=' ';
      b[0]=a[0];
      for(i=1;i<c;i++)
      {
      if((a[i]==' ')&&(a[i-1]==' '))
      j=0; 
      else
      {
      b[count]=a[i];
      count++;
      }
      b[count]='\0';
      }
      printf("%s",b);
      getchar();
      getchar();
      }
