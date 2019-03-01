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
{int n,i=0;
cin>>n;
float a[100],b[100];
for(i=0;i<=n-1;i++)
{cin>>a[i]>>b[i];}
float c;
c=b[0]/a[0];
for(i=1;i<=n-1;i++)
{if(b[i]/a[i]-c>0.05)
  cout<<"better"<<endl;
else if(c-b[i]/a[i]>0.05)
  cout<<"worse"<<endl;
else cout<<"same"<<endl;}
return 0;}
