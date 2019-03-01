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
 int n,i,t,num[100];
 cin>>n;
 for (i=0;i<n;i++)
 {
  cin>>num[i];
 }
 for (i=0;i<(n+1)/2;i++)
 {
     t=num[n-1-i]; 
	 num[n-1-i]=num[i];
	 num[i]=t;
 }
 for (i=0;i<n-1;i++)
 {
  cout<<num[i]<<" ";
 }
 cout<<num[i]<<endl;
 return 0;
}