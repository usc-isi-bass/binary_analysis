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
  char s[10000];
  int n=0,q=0,i,j,num[100],point[10000];
  gets(s);
  for(i=0;i<strlen(s);i++)
	  if (s[i]!=' ') { if (q==0)  {q=1;n++;num[n]=1;point[n]=i;}
	  else num[n]++;}
	  else q=0;
 for (i=n;i>=1;i--)
 {for (j=0;j<num[i];j++)
		 printf("%c",s[point[i]+j]);
 if (i>1) printf(" ");}
}