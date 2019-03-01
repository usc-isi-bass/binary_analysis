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
	char s[105]={0},ss[105]={0};
	int i,j,x;
	gets(s);
	x=strlen(s);
	j=0;

	for(i=1;i<x;i++){
		if(j!=x-1){
			ss[j]=s[i-1]+s[i];
			j++;
		}
	    if(j==x-1){
			ss[x-1]=s[x-1]+s[0];
		}

	}
	printf("%s",ss);



	
		return 0;
	}

				
	
