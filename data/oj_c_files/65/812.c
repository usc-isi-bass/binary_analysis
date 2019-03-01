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
  int n,a[200],b[200],sa=0,sb=0,i;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d%d",&a[i],&b[i]);
    if(a[i]==b[i]+1){sb++;}
    else if(b[i]==a[i]+1){sa++;}
    else if(a[i]==0&&b[i]==2){sb++;}
    else if(a[i]==2&&b[i]==0){sa++;}
  }
    if(sa==sb){printf("Tie");}
    else if(sa>sb){printf("A");}
    else{printf("B");}
    return 0;
}    