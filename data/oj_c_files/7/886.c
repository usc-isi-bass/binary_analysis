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
	  int start,end,ok,i,j,n,m,s;
	  char a[300],b[300],c[300];
      gets(a);
	  gets(b);
	  gets(c);
      n=strlen(a);
	  m=strlen(b);
	  s=strlen(c);
	  for (i=0;i<n;i++)
		  if (a[i]==b[0])
		  {
			  ok=1;
			  for (j=1;j<m;j++)
				  if (a[j+i]!=b[j])
					  ok=0;
			  if (ok)
			  {start=i;end=j+i;break;}
		  }
	  if (ok==1)
	  {
	  for (i=0;i<start;i++)
		  printf("%c",a[i]);
	  for (i=0;i<s;i++)
		  printf("%c",c[i]);
	  for (i=end;i<n;i++)
		  printf("%c",a[i]);
	  printf("\n");
	  }
	  else 
		  puts(a);

 
}
