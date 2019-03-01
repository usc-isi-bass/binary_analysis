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
 int m;
 cin>>m;
 const int n=m;
 int a[n+1];
 for(int i=n;i>=1;i--)cin>>a[i];
 for(int i=1;i<n;i++)cout<<a[i]<<' ';
 cout<<a[n];
 return 0;  
} 
