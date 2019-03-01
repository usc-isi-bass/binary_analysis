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
   int n,a[20000],b[101]={0},i,num=0;
   cin >> n;
   for(i=0;i<n;i++)
    cin >> a[i];
   for(i=0;i<n;i++)
  {
    b[a[i]]++;
    if (b[a[i]]==1)
{
    num++;
    if(num==1)
    cout<<a[i] ;
    if(num!=1)
    cout<<" "<<a[i];
}
   }
  return 0;
}

   