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

void panduan(double x,double y)
{
if((x-y)>(5.0/100))
cout<<"worse"<<endl;
else if((y-x)>(5.0/100))
cout<<"better"<<endl;
else
cout<<"same"<<endl;
}
struct liaoxiao
{
int a;
int b;
}h;
int main()
{
int n,i;
float c[10000];
cin>>n;
for(i=0;i<n;i++)
{
cin>>h.a;
cin>>h.b;
c[i]=h.b/(h.a*1.0);
}
for(i=1;i<n;i++)
{
panduan(c[0],c[i]);
}
return 0;
}
