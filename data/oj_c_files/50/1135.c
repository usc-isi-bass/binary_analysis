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
int w;
cin>>w;
int i=0;
int a[13],day[13]={12,31,28,31,30,31,30,31,31,30,31,30,31};
a[0]=w;
for(i=1;i<=12;i++)
{
a[i]=(a[i-1]+(day[i-1]%7))%7;
if(a[i]==5)cout<<i<<endl;
}
return 0;
}
