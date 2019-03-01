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
	int l1,l2,i,s1=0,s2=0;
  char a[300],b[300];
  scanf("%s %s",a,b);
  l1=strlen(a);
  l2=strlen(b);
  if(l1!=l2)
	  printf("NO");
  else
  {
	  for(i=0;i<l1;i++)
	  {
		  s1+=a[i];
	      s2+=b[i];
	  }
	  if(s1==s2)
		  printf("YES");
	  else
	  printf("NO");
  }

}