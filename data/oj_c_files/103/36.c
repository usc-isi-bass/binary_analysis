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
      int n,i,x,count;
      scanf("%s",a);
      n=strlen(a);
      for(i=0;i<n;i++)
      {
           if(a[i]>'Z')
           a[i]=a[i]-'a'+'A';
      }
      for(i=0,count=0,x=a[0];i<n;i++)
      {
           if(a[i]==x)
           {
               count++;
           }
           else
           {
               printf("(%c,%d)",x,count);
               count=1;
               x=a[i];
           }
           if(i==n-1)
           printf("(%c,%d)",x,count);
      }
      getchar();
      getchar();
      return 0; 
}
