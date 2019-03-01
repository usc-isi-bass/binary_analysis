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


int main(int argc, char* argv[])
{
  char s[50];
  char*p=s;
  gets(s);
  int j=0,k,i=0,l;
  for(;*p!=' ';p++)
  {
	  j++;
  }
  k=j+1;
  for(;s[i]!=s[k];k++);
  for(;;k++)
  {
	  for(;s[i]==s[k];i++,k++);
	  if(i==j) {
		  l=k-2*j-1;
		  break;
	  }
	  else continue;
  }
  printf("%d",l);

 return 0;
}
  


  
	
