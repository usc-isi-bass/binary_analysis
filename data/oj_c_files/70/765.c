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
    int n,i,j;
    double a[100],b[100],max=0,ll[100][100];
    cin>>n;
    for(i=1;i<=n;i++)
    {
      cin>>a[i]>>b[i];
    }
    for(i=1;i<=n-1;i++)
    {
       for(j=i+1;j<=n;j++)
       {
         ll[i][j]=pow((a[i]-a[j]),2)+pow((b[i]-b[j]),2);
         if(ll[i][j]>max) max=ll[i][j];
       }
    }
    printf("%.4f\n",sqrt(max));
    return 0;
}
