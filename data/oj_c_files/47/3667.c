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

//***********************//
//*?????????   *//
//*?????           *//
//*???2010.11.12     *//
//***********************//
int main()
{
 int a[200];//?????????????????????
 int n,i;
 cin>>n;
 for(i=0;i<n;i++)
 {
   cin>>a[i];
 }
 for(i=n-1;i>=0;i--)//????????????????????
 {
   a[i+n]=a[i];
 }
 for(i=n+n-1;i>=n;i--)//???????????????????????n-1?
 {
  a[n+n-1-i]=a[i];
 }
 for(i=0;i<n;i++)
 {
   if(i!=n-1)  
	 cout<<a[i]<<" ";
   else
     cout<<a[i];
 }
 return 0;
}