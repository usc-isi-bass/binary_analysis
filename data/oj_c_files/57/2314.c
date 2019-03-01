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
	char str[MAX+1];
	int n,i,j,len;
gets(str);
n=atoi(str);
  for(i=0;i<n;i++){
	  gets(str);
 len=strlen(str);
	 	  if((str[len-2]=='e')&&(str[len-1]=='r'))
					str[len-2]=0;
	  else if((str[len-2]=='l')&&(str[len-1]=='y'))
					str[len-2]=0;
	  else if((str[len-2]=='n')&&(str[len-1]=='g')&&(str[len-3]=='i'))
					str[len-3]=0;
	   puts(str);
	 
  }

	return 0;
}
