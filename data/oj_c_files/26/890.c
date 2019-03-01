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
	int i,j;
	char sr[101],sc[101];
	gets(sr);

	for(i=0,j=0;sr[i]!='\0';i++){
		if(sr[i]==' '&&sr[i+1]==' '){
			continue;
		}else{
			sc[j]=sr[i];
			j++;
		}
	}
	sc[j]='\0';

	puts(sc);


	
	return 0;

}