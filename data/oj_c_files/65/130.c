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
int n,A=0;
scanf("%d",&n);
int a[n],b[n];
for(int i=0;i<n;i++){
scanf("%d%d",&a[i],&b[i]);
if((a[i]==0&&b[i]==1)||(a[i]==1&&b[i]==2)||(a[i]==2&&b[i]==0)){A++;}
else if(a[i]!=b[i]){A--;}
}
if(A>0){printf("A");}
if(A<0){printf("B");}
if(A==0){printf("Tie");}
return 0;
}