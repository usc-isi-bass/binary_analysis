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
    int n=0;
    int sum=0;
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++)
    {a[i]=i+1;}
    for (int i=0;i<n;i++)
    {
     if(a[i]<10&&a[i]%7!=0)
     {sum=sum+a[i]*a[i];}
     if(a[i]>9&&a[i]%7!=0&&a[i]%10!=7&&(a[i]-a[i]%10)%7!=0)
     {sum=sum+a[i]*a[i];}
    }
    cout << sum << endl;
    return 0;
}