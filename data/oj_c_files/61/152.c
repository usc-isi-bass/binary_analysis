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
    int i=0,j=0,n;
    int a[10000]={0},b[100]={0};
    b[0]=1;b[1]=1;
    cin >> n;
    for(i=0;i<n;i++)
     {cin >> a[i];}
    for(j=2;j<22;j++)
     {b[j]=b[j-1]+b[j-2];}
    for(i=0;i<n;i++)
    cout << b[a[i]-1] << endl;
  
    return 0;
}
