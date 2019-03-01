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
      int s[20000],y[20000];
      int i,j,k;
      for(i=0;i<n;i++)
      {
                      scanf("%d",&s[i]);
      }
      k=0;
      for(i=n-1;i>0;i--)
      {
                      for(j=i-1;j>=0;j--)
                      {
                                         if(s[i]==s[j])
                                                break;
                      }
                      if(j==-1)
                      {
                               y[k]=s[i];
                               k++;
                      }
      }
      printf("%d",s[0]);
      for(i=k-1;i>=0;i--)
            printf(" %d",y[i]);
}
