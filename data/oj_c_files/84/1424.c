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
cin>>n;
int num[100];
int i=0;
int temp1=0,temp2=0,t=0;
for(i=0;i<n;i++)
{
cin>>num[i];
if(temp1<num[i])
{
temp1=num[i];
t=i;
}
}
for(i=0;i<n;i++)
{
if(i==t)continue;
else
{
if(temp2<num[i])temp2=num[i];
}
}
cout<<temp1<<endl<<temp2<<endl;
return 0;
}
