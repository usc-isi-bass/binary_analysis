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
    int m,n,j;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>n;
        double a[100];
        double (*p)=a;
        for( j=0;j<n;j++) cin>>*(p+j);
        double averge,sum=0,s;
        for( j=0;j<n;j++) sum=sum+*(p+j);
        averge=sum/n;
        sum=0;
        for( j=0;j<n;j++) sum=sum+(*(p+j)-averge)*(*(p+j)-averge);
        s=sqrt(sum/n);
        printf("%.5f\n", s);
    }
    return 0;
}
