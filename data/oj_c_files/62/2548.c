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
	char k[1000];
    int i;
	gets(k);
	
    for(i=0;k[i]!='\0';i++){
		
		if(k[i]!=' ') printf("%c",k[i]);
		else{
			if(k[i+1]!=' ') printf("%c",k[i]);
		}
	}
	
    return 0;

}
