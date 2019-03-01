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
  int n,c,i,j;
  scanf("%d",&n);
  char da[n][256],ad[n][256];
  for(i=0;i<n;i++)
  {
	  scanf("%s",da[i]);
  }
  for(i=0;i<n;i++)
  {for(j=0;j<256;j++)
  {
	  if(da[i][j]=='A')
		  ad[i][j]='T';
      if(da[i][j]=='T')
		  ad[i][j]='A';
	  if(da[i][j]=='C')
		  ad[i][j]='G';
	  if(da[i][j]=='G')
		  ad[i][j]='C';
  }
  puts(ad[i]);
  }

  return 0;





}