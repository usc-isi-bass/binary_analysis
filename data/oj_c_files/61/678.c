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
{  int n,x[100],a[100],z[100];
    scanf("%d",&n);
 x[0]=1;x[1]=1;
  for(int i=2;i<20;i++){x[i]=x[i-1]+x[i-2];}
  
  for(int j=0;j<n;j++){
  scanf("%d",&a[j]);
  z[j]=x[a[j]-1];
}
  for(int t=0;t<n;t++){
  printf("%d\n",z[t]); 
  }
return 0;
}

   