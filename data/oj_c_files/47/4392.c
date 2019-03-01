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
    int i;
    cin >> n;//?? n
    int a[100]={0};
    for (i=1;i<=n;i+=1)   cin>>a[i];
    for (i=n;i>=2;i-=1)   cout<<a[i]<<" ";
    cout<<a[1];//?? 
 
    
    return 0;
} 
