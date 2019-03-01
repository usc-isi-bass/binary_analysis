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

int main(){
int n,i,m,k;
int a[max],b[max];
scanf("%d",&n);
for(i=0,m=0,k=0;i<n;i++){
 scanf("%d %d",&a[i],&b[i]);
  if(a[i]-b[i]==1||a[i]-b[i]==-2){k++;}
  if(b[i]-a[i]==1||b[i]-a[i]==-2){m++;}
}
if(m>k){printf("A");}
if(m<k){printf("B");}
if(m==k){printf("Tie");}
}