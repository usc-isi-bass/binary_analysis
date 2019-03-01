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
      int i,j,n,m,b[1000];
      float p[1000],q[1000],sum;
      p[0]=2;p[1]=3;
      q[0]=1;q[1]=2;
      sum=p[0]/q[0]+p[1]/q[1];
      scanf("%d",&m);
      for(j=0;j<m;j++)
      {
                       scanf("%d",&n);
                       if(n==1)
                       printf("%.3f\n",p[0]/q[0]);
                       else if(n==2)
                       printf("%.3f\n",sum);
                       else
                       {
                           for(i=2;i<n;i++)
                           {
                                     p[i]=p[i-1]+p[i-2];
                                     q[i]=q[i-1]+q[i-2];
                                     sum=sum+p[i]/q[i];
                           }
                       printf("%.3f\n",sum);
                        sum=p[0]/q[0]+p[1]/q[1];           
                       }
      }
      getchar();
}
