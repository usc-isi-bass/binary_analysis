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
      char s[100];//????????????//
	  char data[200][100];
	  char c;
	  int k=0,h=0;
	  scanf("%s",s);
	  strcpy(data[k++],s);
	  while((c=getchar())!='\n')
	  {
		  scanf("%s",s);
		  strcpy(data[k++],s);
	  }
	  for(h=k-1;h>=0;h--)
	  {
		  if(h==0)printf("%s\n",data[0]);
		  else printf("%s ",data[h]);
	  }
}

