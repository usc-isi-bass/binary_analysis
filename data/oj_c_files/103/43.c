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
      char a[1001];
      int l,i,sum=1;
      scanf("%s",a);
      l=strlen(a);
      a[l]=' ';
      for(i=0;i<l;i++)
      {
                      if(a[i]<='z'&&a[i]>='a')
                      a[i]=a[i]-'a'+'A';
      }
      for(i=0;i<l;i++)
      {
                      if(a[i]==a[i+1])
                      sum=sum+1;
                      else
                      {
                          printf("(%c,%d)",a[i],sum);
                          sum=1;
                      }
      }
      getchar();
      getchar();
}
