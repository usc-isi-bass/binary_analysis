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
      char x[1001],z[1001]; 
      int i,n=1;
      for (i=0;i<1001;i++)
      {
          x[i]='\0';
          z[i]='\0';
          }
      scanf("%s",x);
      //printf("%c\n",xz[0]);
      for (i=0;x[i]!='\0';i++)
      {
          if (x[i]>='a'&&x[i]<='z')
          z[i]=x[i]-'a'+'A';
          else
          z[i]=x[i];
      }
      for (i=0;z[i]!='\0';i++)
      {
          if (z[i]==z[i+1])
          n++;
          else
          {printf("(%c,%d)",z[i],n);
          n=1;}
      }
      getchar();
      getchar();
      getchar();
}