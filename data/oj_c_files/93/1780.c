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
  int x,a,b,c;
  char d='n';
  a=3;b=5;c=7;
  scanf("%d",&x);
  if(x % 105==0)
	  printf("%d %d %d\n",a,b,c);
  else{
  if(x % 15==0)
	  printf("%d %d\n",a,b);
  if(x % 21==0)
	  printf("%d %d\n",a,c);
  if(x % 35==0)
	  printf("%d %d\n",b,c);
  if(x % 3==0 && x % 5!=0 && x % 7!=0)
	  printf("%d\n",a);
  if(x % 5==0 && x % 3!=0 && x % 7!=0)
	  printf("%d\n",b);
  if(x % 7==0 && x % 5!=0 && x % 3!=0)
	  printf("%d\n",c);
  if(x % 3!=0 && x % 7!=0 && x % 5!=0)
      printf("%c\n",d);
  }
}