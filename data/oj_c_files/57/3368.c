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
	int i,j,n,Strlen;
	char word[100][50];
	scanf("%d",&n);
    for(i=0;i<n;i++)
		scanf("%s",&word[i]);
      for(i=0;i<n;i++)
	  {Strlen=strlen(word[i]);
	  if(word[i][Strlen-1]=='g')
	  for(j=0;j<Strlen-3;j++)
		  printf("%c",word[i][j]);
	  else
       for(j=0;j<Strlen-2;j++)
		  printf("%c",word[i][j]);
	   printf("\n");}
	  return 0;
}
