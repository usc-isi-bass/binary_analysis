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
  int i,m,n;
  for(;;)
  {
	  char str[11],substr[4],combine[15]={0};
	  if(scanf("%s%s",str,substr)==EOF) break;
	  n=strlen(str);
	  m=0;
	  for(i=0;i<n;i++)
	  {
		  if(str[i]-str[m]>0) m=i;
	  }
	  for(i=0;i<=m;i++)
	  {
		  combine[i]=str[i];
	  }
	  for(i=1;i<=3;i++)
	  {
		  combine[m+i]=substr[i-1];
	  }
	  for(i=1;i<=n-m-1;i++)
	  {
		  combine[m+3+i]=str[m+i];
	  }
	  puts(combine); 
  }
}

	   		   