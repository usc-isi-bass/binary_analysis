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
  int i,max,second,a[301];
  char c;
  i=1;
  max=0;
  second=0;
  do
   { scanf("%d",&a[i]);
     if(a[i]>max)
      { second=max;
        max=a[i];
      }
     else if(a[i]>second&&a[i]<max)
      second=a[i];
     if(scanf("%c",&c)==EOF)break;
     i++;
   }while(c==',');
  if((i==2)||(max==a[1]&&second==0))printf("No");
    else printf("%d",second);

  /*scanf("%d",a[1]);
  i=2;
  max=a[1];
  second=0;
  while(scanf(",%d",&a[i])!=EOF)
   { if(a[i]>max)
      { second=max;
        max=a[i];
      }
     else if(a[i]>second&&a[i]<max)
      second=a[i];
     i++;
   }
  if((i==2)||(max==a[1]&&second==0))printf("NO");
    else printf("%d",second);*/

  return 0;
}
