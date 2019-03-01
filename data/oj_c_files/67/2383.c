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
{int n,i;
cin>>n;
float a[n],b[n],c;
cin>>a[0]>>b[0];
c=b[0]/a[0];
for(i=1;i<n;i++)
{cin>>a[i]>>b[i];
if(b[i]/a[i]<=c+0.05&&b[i]/a[i]>=c-0.05)
cout<<"same"<<endl;
else if(b[i]/a[i]>c+0.05)
cout<<"better"<<endl;
else
cout<<"worse"<<endl;}
return 0;
}