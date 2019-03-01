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
  int m,j,i,b[1000];
  double a[1000],s=0;
  scanf("%d",&m);
  for(j=0;j<m;j++){
    scanf("%d",&b[j]);
  }
  for(j=0;j<m;j++){
     for(i=0;i<b[j];i++){
        a[0]=2/1;
        a[i+1]=1+1/a[i];
        s+=a[i]; 
	 }
     printf("%.3lf\n",s);
	 s=0;
  }
  return 0;
}

