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
 int n,i,num[100],result[100];
 cin>>n;
 for (i=0;i<n;i++)
 {
  cin>>num[i];
 }
 for (i=0;i<n;i++)
 {
  result[n-1-i]=num[i];
 }
 for (i=0;i<n-1;i++)
 {
  cout<<result[i]<<" ";
 }
 cout<<result[i]<<endl;
 return 0;
}