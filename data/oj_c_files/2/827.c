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
  int n,i,j;
  int max,p;
 int mwj;
  int shu[1000];
  char zuo[1000][30];
  int w[26];
  for(i=0;i<26;i++)
	  w[i]=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
	  scanf("%d %s",&shu[i],zuo[i]);
      for(j=0;j<strlen(zuo[i]);j++)
	  {
         w[(zuo[i][j]-65)]=w[(zuo[i][j]-65)]+1;
	  }
  }
  max=w[0];p=0;
  for(i=0;i<26;i++)
  {
	  if(w[i]>max)
	  {
		  max=w[i];
		  p=i;
	  }
  }
  printf("%c\n",p+65);
  printf("%d\n",max);
  for(i=0;i<n;i++)
  {
	  for(j=0;j<strlen(zuo[i]);j++)
	  {
		  mwj=zuo[i][j];
		  if(mwj==p+65)
		  {
			  printf("%d\n",shu[i]);
			  break;
		  }
	  }
	 
  }
}



