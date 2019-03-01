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
int n,count=1;
int a[100001];
int k;

cin>>n;
for(int i=1;i<=n;i++)
  cin>>a[i];
cin>>k;

for(int i=1;i<=n;i++)
{
       if(a[i]!=k)
       {
            a[count]=a[i];
            count++;
       }
}

for(int i=1;i<=count-2;i++)
cout<<a[i]<<' ';
cout<<a[count-1];

return 0;
} 
