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
    cin>>n;
    int i=0,j=0;
    int a[n];
    for(i=0;i<n;i++)    
    {
                    cin>>a[i];
    }
    cout<<a[0];     // ???????????????? 
    for(i=1;i<n;i++)  //???? 
    {
                    for(j=0;j<=i;j++)
                    {
                                    if(a[i]==a[j])//?????????????????????j???i?????? 
                                    break;
                    }
    if(i==j)        //???????i?j?????a[i] 
    cout<<" "<<a[i];
    }
return 0;
}