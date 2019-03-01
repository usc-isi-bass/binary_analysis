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
	int n,i,j,k;
	char a[30];
	char *s;
	gets(a);
    s=a;
	n=strlen(a);
      for(i=0;i<n;i++)
	  {if(*(s+i)>='0'&&*(s+i)<='9')
		  {
			  j=0;
			  printf("%c",*(s+i));
		  }
		  else
			  if(j==0)
			  {  printf("\n");
	  continue;}
			  else
				  continue;
}
 return 0;
}