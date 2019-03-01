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
  int p=0;
  char a='a';

  for(;a!='\n';) 
  {
	  scanf("%c",&a);
	  if(a!=' ')
	  {
		  printf("%c",a);
		  p=0;
	  }
	  else if(a==' '&&p==0)
	  {
		  p=1;
		  printf("%c",a);
	  }
	  else if(a==' '&&p==1) continue;
  }

}