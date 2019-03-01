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
{int n,i,j;
cin>>n;
int a[n];
for(i=0;i<n;i++)
  {cin>>a[i];}
int b[20]={0};
for(j=0;j<n;j++)
   {b[0]=1;
    b[1]=1;
    if(a[j]<=2)
     cout<<"1"<<endl;
    else
    {for(i=2;i<a[j];i++)
      {b[i]=b[i-1]+b[i-2];}
    cout<<b[i-1]<<endl;}}
return 0;
}