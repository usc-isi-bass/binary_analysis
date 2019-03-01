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
 int a[100],b[100],num=0,i,j,n=0;
 for(i=0;i<100;i++){
 scanf("%d %d",&a[i],&b[i]);
 if(a[i]==0&&b[i]==0){
  n=i;
 break;
 }
 }
 for(i=0;i<n;i++){
  for(j=2;j<=a[i];j++){
  num=(num+b[i])%j;
  }
  if(i<n-1){
  printf("%d\n",num+1);
  }
  if(i==n-1){
  printf("%d",num+1);
  }
  num=0;
 }
 return 0;
}