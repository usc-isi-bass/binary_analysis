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
{int n,a[100],b[100],i,j;
cin>>n;
for(i=0;i<n;i=i+1)
{cin>>a[i];
b[n-1-i]=a[i];}
for(j=0;j<n;j=j+1)
{if(j==0) cout<<b[j];
else cout<<' '<<b[j];}

return 0;
}