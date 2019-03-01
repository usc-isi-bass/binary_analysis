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
j=0;
char zfc[31],jg[31];
gets(zfc);
for(i=0;zfc[i]!=0;i++){
	if(zfc[i]>='0'&&zfc[i]<='9'){
		jg[j]=zfc[i];
		if(zfc[i+1]>='0'&&zfc[i+1]<='9'){
			j++;
			continue;
		}else{
			jg[j+1]=0;
			puts(jg);
			j=0;
		}
	}
}
    return 0;
}


