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
 int n=0,k=0,i=0,j=0,l=0,m=0;            //??????????
 cin>>n;                     //??n
 int a[100000];              //?????100001??????
 for(i=0;i<=n-1;i++)         //???????
  cin>>a[i];
 cin>>k;                     //??k
 while(j < n){               //????n??
  while(a[j] == k &&j<=n-1){  //????????k??????????????
   for(l = j; l <= n-2; l++){
    a[l] = a[l+1];
   }
   n--;
  }
  j ++;
 }
 for(m=0;m<=n-2;m++)           //????
  cout<<a[m]<<' ';
 cout<<a[m];
 return 0;
}