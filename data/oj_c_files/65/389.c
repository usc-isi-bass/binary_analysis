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
      int n;
      int i;
      scanf("%d",&n);
      int a[n],b[n];
      int s=0,t=0;
      for(i=0;i<n;i++)
      {
      scanf("%d%d",&a[i],&b[i]);
      if(a[i]-b[i]==1||b[i]-a[i]==2)
      t++;
      else if(a[i]==b[i])
      {s++;t++;}
      else
      s++;
      }
      if(s>t)
      printf("A\n");
      else if (s==t)
      printf("Tie\n");
      else
      printf("B\n");
      
      
}