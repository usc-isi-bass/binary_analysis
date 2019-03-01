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
 int m,n,a,b,q;
double s=0;
 scanf("%d",&m);
 for(int i=0;i<m;i++){
 scanf("%d",&n);
 s=0;
  for(int h=0;h<n;h++){
      if(h==0){ a=2;
    b=1;}
    else{
    q=a;
    a=a+b;
    b=q;}
    s=s+a*1.0/b;
  }
  printf("%.3lf\n",s);
 }
return 0;
}
   