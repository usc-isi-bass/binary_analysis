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

char a[5000][256];
int main() 
{
  int i,n,j;
  scanf("%d",&n);
  for(i=0;i<n;i++){scanf("%s",&a[i]);}
  for(i=0;i<n;i++){
	  for(j=0;j<strlen(a[i]);j++){
		  switch(a[i][j]){
		  case'A':
			  a[i][j]='T';
			  break;
		  case'T':
			  a[i][j]='A';
			  break;
		  case'C':
			  a[i][j]='G';
			  break;
		  default:
			  a[i][j]='C';
		  }
	  }
  }
  for(i=0;i<n;i++){printf("%s\n",a[i]);}
  return 0;
} 