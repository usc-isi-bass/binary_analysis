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
	char st[351],su[351],re[551],reh[551];
	int a,b,c,e,r,lu,lr;
	
	scanf("%s",st);
	scanf("%s",su);
	scanf("%s",re);
	r=-1;
	for(a=0;a<strlen(st);a++){
		e=1;
		for(b=0;b<strlen(su);b++){
			if(st[a+b]!=su[b]){
				e=0;
			}
		}
		if(e){
			r=a;
		
			break;
		}
	}
	if(r+1){
	for(a=0;a<r;a++){
		reh[a]=st[a];
	}
	for(a=0;a<strlen(su);a++){
		reh[r+a]=re[a];
	}
	lu=strlen(su);
	lr=strlen(re);
	for(a=r+lu;a<=530;a++){
		reh[lr+a-lu]=st[a];
	}
	
	
				printf("%s",reh);
			
	}
	else{
		printf("%s",st);
	}
	return 0;
}

