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
      int i,count=1;
      char a[2000];
      for(i=0;i<2000;i++)a[i]='\0';
      gets(a);
      for(i=0;i<2000;i++)
      {
                         if(a[i]=='\0')break;
                         if(a[i]==a[i+1] || a[i]==a[i+1]+('A'-'a') || a[i]==a[i+1]-('A'-'a'))count++;
                         else
                         {
                             if(a[i]>='a')a[i]=a[i]-('a'-'A');
                             printf("(%c,%d)",a[i],count);
                             count=1;
                         }
      }
}