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

  int main(){
  char sz[200];
  gets(sz);
  int k;
  for(int i=0;i<100;i++){
    for(k=0;sz[k]!='\0';k++){
	    if(sz[k]==' '){
		      if(sz[k+1]==' '){
			      for(;sz[k]!='\0';k++){
			        sz[k]=sz[k+1];
				  }
			  }
		}
	}
  }
  puts(sz);
  return 0;
}