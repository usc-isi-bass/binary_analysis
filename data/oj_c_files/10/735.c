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
      scanf("%d",&n);
      int d[n];
      for(int i=0;i<n;i++)
      {
              scanf("%d",d+i);
      }
      int opt[n];
      for(int i=0;i<n;i++)
      {
              opt[i]=0;
      }
      for(int i=n;i>=0;i--)
      for(int j=i;j<n;j++)
      {
              if((d[i]>=d[j])&&(opt[i]<=opt[j]+1))
              opt[i]=opt[j]+1;
      }
      int max=1;
      for(int i=0;i<n;i++)
      {
              if(opt[i]>max)
              max=opt[i];
      }
      printf("%d",max);
}
