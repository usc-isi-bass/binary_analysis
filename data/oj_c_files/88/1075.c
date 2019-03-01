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
	char s[31];
	int i,t=0;
	gets(s);
	for(i=0;s[i];i++){
		if(s[i]>='0'&&s[i]<='9'){
		  printf("%c",s[i]);
		  t=1;

		}else{
		  t=0;
		}
		if(t=1&&s[i+1]&&(s[i+1]<'0'||s[i+1]>'9')){
		  printf("\n");
		}

	}
   return 0;


}