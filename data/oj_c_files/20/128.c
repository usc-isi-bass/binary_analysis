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
	char s[301];
	char ds[301];
    int i,j,k,l,max;
	while (scanf("%s",&s)!=EOF)
	{
      
	  l=strlen(s);
	  scanf("%s",&ds);
	  max=l-1;
	  for (j=l-1;j>0;j=j-1)
	  {
		  if (s[j]>=s[max]) max=j;
	  }
	  for (i=0;i<=max;i++)
		  printf("%c",s[i]);
	  printf("%s",ds);
	  for(i=max+1;i<l;i++)
		  printf("%c",s[i]);
	  printf("\n");
	}
	return 0;
}