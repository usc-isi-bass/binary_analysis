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
    double x[100],y[100];
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%lf %lf",&x[i],&y[i]);
    }
    double max=0;
    for(int j=1;j<=n;j++)
        for(int k=j+1;k<=n;k++)
            {
                if( (  (x[j]-x[k])*(x[j]-x[k])+(y[j]-y[k])*(y[j]-y[k]) )>=max   )
                max=(  (x[j]-x[k])*(x[j]-x[k])+(y[j]-y[k])*(y[j]-y[k]) );
            }
    printf("%.4lf",sqrt(max));

}
