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
      int a[1000]={0},b[1000],l,i,p=0;
      char zm[1000];
      scanf("%s",zm);
      l=strlen(zm);
      b[0]=zm[0];
      for(i=1;i<l;i++)
      {
                      if(zm[i]==zm[i-1]||zm[i]==zm[i-1]-'a'+'A'||zm[i]==zm[i-1]-'A'+'a')
                      a[p]=a[p]+1;
                      else
                      {
                          p=p+1;
                          b[p]=zm[i];
                      }
      }
      for(i=0;i<=p;i++)
      {
                       if(b[i]<='z'&&b[i]>='a')
                       b[i]=b[i]-'a'+'A';
      }
      for(i=0;i<=p;i++)
      {
                       printf("(%c,%d)",b[i],a[i]+1);
      }
}