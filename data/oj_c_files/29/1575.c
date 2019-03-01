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

/*******************????******************
????
******************************************/
int main()
{
    int m,n;
    cin>>m;//????????
    for (int i=0;i<m;i++)
    {
        cin>>n;
        int a[n+4];
        double sum=0; 
        a[1]=1;a[2]=2;//????????? 
        for (int j=3;j<=n+3;j++)
           a[j]=a[j-1]+a[j-2];
        for (int j=1;j<=n;j++)
        {
            sum+=(double)a[j+1]/a[j]; 
            //cout <<sum<<endl;
        }
        printf("%.3f",sum);
        cout<<endl;
    }
    return 0;
}
