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
    int n,i,j,k;
    double x[1000],y[1000],d[10000],max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%lf %lf",&x[i],&y[i]);               
    }  
    for(i=0;i<n;i++)
      for(j=0;j<n;j++)
        {
           d[(i+1)*(j+1)]=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);              
        }
    for(k=1;k<=n*n;k++)
       if(max<d[k])
          max=d[k];  
    printf("%.4lf",sqrt(max));              
      
getchar();getchar();getchar();getchar();        
}
