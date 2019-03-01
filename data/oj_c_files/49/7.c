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
int l,n,i,j,k;
char c[1000];
gets(c);
l=strlen(c);
	 for(i=1;i<=l-1;i++)
	  for(j=0;j<l-1;j++)
	  for(n=0;n<=i/2;n++)
	{
	  if(c[j+n]!=c[j+i-n])break;
	  else if(c[j+n]==c[j+i-n] && n<i/2)continue;
	  else
	  {for(k=j;k<j+i;k++)printf("%c",c[k]);printf("%c\n",c[j+i]);}
	}
}