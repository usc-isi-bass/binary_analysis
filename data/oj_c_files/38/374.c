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
{
    int k;
    scanf("%d",&k);
    for(int i=0;i<k;i++)
    {
        int n;
        double a[100],sum=0,x;
        scanf("%d",&n);
        for(int j=0;j<n;j++)
        {
            scanf("%lf",&a[j]);
                 sum=sum+a[j]; 
        }
        x=sum/n;
        double s1=0,s2;
        for(int j=0;j<n;j++)
        {
           
            s1=s1+(a[j]-x)*(a[j]-x);
        }
        s2=sqrt(s1/n);
        printf("%.5lf\n",s2);
     }
     return 0;
}
        