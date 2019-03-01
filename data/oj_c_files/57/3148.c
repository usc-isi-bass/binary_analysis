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
  scanf("%d",&n);
  char da[n][32];
  for(i=0;i<n;i++)
  {
	  scanf("%s",da[i]);
  }
  for(i=0;i<n;i++)
  {
      k=strlen(da[i]);
	  if(da[i][k-1]=='r'&&da[i][k-2]=='e')
	  { da[i][k-1]='\0';
	  da[i][k-2]='\0';}
      if(da[i][k-1]=='y'&&da[i][k-2]=='l')
      {  da[i][k-1]='\0';
	  da[i][k-2]='\0';}
      if(da[i][k-1]=='g'&&da[i][k-2]=='n'&&da[i][k-3]=='i')
	  { da[i][k-1]='\0';
		da[i][k-2]='\0';
		da[i][k-3]='\0';}
	  puts(da[i]);



  }

  return 0;




}