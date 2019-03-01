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
{ int a,b,c;
  scanf("%d",&a);
  b=a/10000;
  if(b)
	  c=5;
  else{ b=a/1000;
      if(b)
		  c=4;
	  else{ b=a/100;
		  if(b)
			  c=3;
		  else{ b=a/10;
		  if(b)
			  c=2;
		  else c=1;}}}
  switch(c)
  {
  case 5:printf("%d%d%d%d%d\n",a%10,a%100/10,a%1000/100,a%10000/1000,a/10000);break;
  case 4:printf("%d%d%d%d\n",a%10,a%100/10,a%1000/100,a/1000);break;
  case 3:printf("%d%d%d\n",a%10,a%100/10,a/100);break;
  case 2:printf("%d%d\n",a%10,a/10);break;
  case 1:printf("%d\n",a);}
  return 0;}