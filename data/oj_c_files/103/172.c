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
      char  a[1001];
      int i,n;
      gets(a);
      for(i=0;a[i]!='\0';i++)
      {
                             if(a[i]>='a'&&a[i]<='z')
                             a[i]=a[i]-'a'+'A';
      }
      for(i=0;a[i]!='\0';)
      {
                       n=0;
                       while(a[i+1]==a[i])
                       {
                                          n++;
                                          i++;
                       }
                       n++;
                       printf("(%c,%d)",a[i],n);
                       i++;
      }
}                
