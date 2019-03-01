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
{int a[20]={1,1},i,n,c,b;

for(i=2;i<=20;i++)a[i]=a[i-1]+a[i-2];
cin>>n;
for(i=1;i<=n;i++){cin>>c;cout<<a[c-1]<<'\n';}

return 0;
}