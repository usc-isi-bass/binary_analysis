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
int n;
cin>>n;
float sum;
int a[300];
for(int i=0;i<=n-1;i++)
{

cin>>a[i];
sum=sum+a[i];
}
int k;
for(int i=0;i<n-1;i++)
{
for(int s=0;s<n-1-i;s++)
{
if(a[s]>a[s+1])
{
k=a[s];
a[s]=a[s+1];
a[s+1]=k;
}
}
}
float pingjun=sum/n;
float h=pingjun-a[0],t=a[n-1]-pingjun;
if(h==t)
{
cout<<a[0]<<","<<a[n-1]<<endl;
}
else if(h>t)
{
cout<<a[0];
}
else if(h<t)
{
cout<<a[n-1];
}
return 0;
}




