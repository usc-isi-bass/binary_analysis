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

void main ()
{ int a,n,i,k,leap=1;
  char s[200];
  gets(s);
  a=strlen(s);
  for(i=0;i<a;i++)
  { 
	  if(s[i]!=' ')
	  {leap=1;
		  printf("%c",s[i]);
	  }
	  if(s[i]==' '&&leap==1)
	  { printf(" ");
	   leap=0;
	  }
  }

}