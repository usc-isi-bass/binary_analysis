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
    int n,i,a[300],b[300],m=0;
    cin>>n;
    for(i=0;i<n;i++)
    cin>>a[i]>>b[i];
    for(i=0;i<n;i++){
                     if(a[i]==b[i]) continue;
                     if((a[i]-b[i])==1) m--;
                     if((b[i]-a[i])==1) m++;
                     if((a[i]-b[i])==2) m++;
                     if((b[i]-a[i])==2) m--;
                     }
    if(m>0) cout<<"A";
    if(m<0) cout<<"B";
    if(m==0) cout<<"Tie";
    return 0;
}
