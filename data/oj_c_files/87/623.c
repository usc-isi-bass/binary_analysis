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


int main ()
{ int a,b,c,d,e,f,s[1000],i;
for(i=0;a!=0;i++){
  scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
  s[i]=f+60*e+3600*d-c-60*b-3600*a+3600*12;
  if(a!=0){printf("%d\n",s[i]);}
}
  return 0;
}
