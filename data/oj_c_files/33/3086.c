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
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		char str[256],*ps;
		scanf("%s",str);
		for(ps=str;*ps!='\0';ps++){
			if(*ps=='A'){
			    *ps=*ps-'A'+'T';
			}else if(*ps=='T'){ 
				*ps=*ps-'T'+'A';
			}else if(*ps=='C'){
				*ps=*ps-'C'+'G';
			}else if(*ps=='G'){
				*ps=*ps-'G'+'C';
			}
		}
	    printf("%s\n",str);
	}
	return 0;
}