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
    int n,*q,i,j;
    cin>>n;
    int a[n];
    q=a;
    for(int i=0;i<n;i++)
    cin>>a[i];           //???? 
    cout<<*(q+n-1);
    for( j=n-2;j>=0;j--)
    cout<<" "<<*(q+j);      //?????????? 
    cout<<endl;
     
return 0;
}
