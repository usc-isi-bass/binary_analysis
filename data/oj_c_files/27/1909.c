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

double a,b,c;
double x1,x2,p,q;
int n;
int main()
{
    
    cin >> n;
    while(n--)
    {
        cin >> a >> b >> c;
       if((b*b-4*a*c)>0)
       {
        x1 = (0-b+sqrt(b*b-4*a*c))/(a*2);
        x2 = (0-b-sqrt(b*b-4*a*c))/(a*2);
        cout << setprecision(5) << fixed;
        printf("x1=%.5f;x2=%.5f\n",x1,x2);
    }
    else if((b*b-4*a*c)==0)
    {
           x1 = (0-b+sqrt(b*b-4*a*c))/(a*2);
        x2 = (0-b-sqrt(b*b-4*a*c))/(a*2);
        cout << setprecision(5) << fixed;
       printf("x1=x2=%.5f\n",x1);
    }
    else if((b*b-4*a*c)<0)
    {
           x1 = (0-b)/(a*2);
           p=sqrt(4*a*c-b*b)/(a*2);
        x2 = (0-b)/(a*2);
        q=-sqrt(4*a*c-b*b)/(a*2);
        cout << setprecision(5) << fixed;
        printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",x1,p,x2,p);
    }
}
    return 0;

}
