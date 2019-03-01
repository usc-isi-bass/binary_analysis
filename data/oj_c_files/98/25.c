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
  int n,i,m=0;
  char word[1000][20];
  scanf("%d",&n);
  for(i=0;i<=n-1;i++)
  {
	  scanf("%s",word[i]);
  }
  for(i=0;i<=n-1;i++)
  {
	  if(m<=80-strlen(word[i]))
	  {
		  printf("%s",word[i]);
		  if(m<=79-strlen(word[i])-strlen(word[i+1])&&i<n-1)
		  printf(" ");
          m+=strlen(word[i])+1;
	  }
      else
	  {
		  i=i-1;
		  printf("\n");
		  m=0;
	  }
	  
  }
  return 0;
}