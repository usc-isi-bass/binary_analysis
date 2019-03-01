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

main()
{ int n;
  int a,b,c,d;
  scanf("%d",&n);
  a=n%10;
  if(n<10) printf("%d",a);
  else if(n>9&&n<100){b=n/10;printf("%d%d",a,b);}
 else if(n>99&&n<1000){b=n/10%10;c=n/100;printf("%d%d%d",a,b,c);}
 else if(n>999&&n<10000){b=n/10%10;c=n/100%10;d=n/1000;printf("%d%d%d%d",a,b,c,d);}












return 0;
}