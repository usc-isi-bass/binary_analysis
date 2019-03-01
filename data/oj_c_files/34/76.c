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
  int n;
  scanf("%d",&n);
  if(n==1) printf("End");
  else {for(;;)
  {if(n%2==0) {n=n/2;printf("%d/2=%d\n",2*n,n);if(n==1) {printf("End\n");break;}}
  else {n=n*3+1;printf("%d*3+1=%d\n",(n-1)/3,n);{if(n==1) {printf("End\n");break;}}
  }}
}
}

