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
      char a[1000];
      scanf("%s",a);
      int i;
      for(i=0;a[i]!='\0';i++)
      {
        if('a'<=a[i]&&a[i]<='z')
        a[i]=a[i]+'A'-'a';
      }
      for(i=0;a[i]!='\0';i++)
      {
        int b=0;
        while(a[i+1]==a[i])
        {
          b=1+b;
          i=i+1;
          }
        printf("(%c,%d)",a[i],b+1);
      }
}        
        

