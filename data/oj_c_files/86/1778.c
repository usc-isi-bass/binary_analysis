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
  int n,i,m,j,x=60;
  scanf("%d",&n);
  for(i=0;i<n;i++,x=60){
    scanf("%d",&m);if(m==0){printf("60\n");continue;}
    int p[m];
    for(j=0;j<m;j++){
      scanf("%d",&p[j]);
    }
    for(j=0;j<m;j++){
      if(p[j]>=x){printf("%d\n",x);break;}
      if(p[j]<x&&p[j]>=x-3){printf("%d\n",p[j]);break;}
      if(p[j]<x-3){x-=3;}
    }
    if(j==m){printf("%d\n",x);}
  }
  return 0;
}
