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

void main()
{
 int n,i=0,j=0,k=0,l,m;
 scanf("%d",&n);
 int b[n],c[n];
 while(j<n)
 {
  b[j]=0;
  c[j]=0;
  j++;
 }
 j=0;
 scanf("%d %d",&l,&m);
 b[l]++;
 c[m]++;
 i++;
 while((l+m)!=0)
 {
  scanf("%d %d",&l,&m);
  b[l]++;
  c[m]++;
  i++;
 }
 i--;
 b[0]--;
 c[0]--;
 while(j<n)
 {
  if(b[j]==0&&c[j]==n-1)
   printf("%d",j),j=n,k++;
  j++;
 }
 if(k==0)
  printf("NOT FOUND");
}

