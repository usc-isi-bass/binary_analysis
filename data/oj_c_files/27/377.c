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

void main()
{
    double a,b,c,s;
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lf%lf%lf",&a,&b,&c);
        s=b*b-4*a*c;
        if(s>0)
            printf("x1=%.5f;x2=%.5f\n",(-b+sqrt(b*b-4*a*c))/(2*a),(-b-sqrt(b*b-4*a*c))/(2*a));
        else if(s==0)
        {
            printf("x1=x2=%.5f\n",-b/(2*a));
        }
        else if(s<0)
      {if(-b/(2*a)!=0)
            printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",-b/(2*a),sqrt(-(b*b-4*a*c))/(2*a),-b/(2*a),sqrt(-(b*b-4*a*c))/(2*a));
        else
             printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",b/(2*a),sqrt(-(b*b-4*a*c))/(2*a),b/(2*a),sqrt(-(b*b-4*a*c))/(2*a));}
    }
}