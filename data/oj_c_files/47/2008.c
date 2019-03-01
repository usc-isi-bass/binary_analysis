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
 int n,i=0,temp=0,a[100];
 cin>>n;
 while(cin>>a[i++])
 ;
 i=0;
 while(i<=(n-1)/2)
 {
  temp=a[i];
  a[i]=a[n-1-i];
  a[n-1-i]=temp;
  i++;
 }
 cout<<a[0];
 for(i=1;i<n;i++)cout<<" "<<a[i];
 return 0;
}