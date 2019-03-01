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
    cin>>k;
    for(int i=0;i<k;i++)
    {
        int n;
        cin>>n;
        double a[n],x=0,S=0;
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        for(int j=0;j<n;j++)
        x+=a[j]; 
        x=x/n;
        for(int j=0;j<n;j++)
        {
            S+=pow(x-a[j],2);
        }
        S=S/n;
        S=sqrt(S);
        
        cout<<fixed<<setprecision(5)<<S<<endl;
    }
    
    return 0;
}
