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

int main()
{ int i,max1=0,max2=0,n,sign;
  int a[100];
  scanf("%d/n",&n);
  for(i=0;i<=99;i++)
   {if(i<=n-1)scanf("%d/n",&a[i]);
    else break;}
  for(i=0;i<=n-1;i++)
   { if(a[i]>max1)
      {max1=a[i];
       sign=i;}
    
    }
    a[sign]=0;
    for(i=0;i<=n-1;i++)
   { if(a[i]>max2)
      max2=a[i];
     
    }
    printf("%d\n%d",max1,max2);
    return 0;
}