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
	char s[256],zi[256],r[256];
	int lens,lenzi,lenr;
	int i,k,p=2;
	scanf("%s %s %s",&s,&zi,&r);
	lens=strlen(s);
	lenzi=strlen(zi);
	lenr=strlen(r);
	for(i=0;i<lens;i++){
		if(s[i]==zi[0]){
			for(k=1;k<lenzi;k++){
				if(s[i+k]==zi[k]){
					p=0;
				}else{
					break;
				}
			}
			if(p==0){
				for(k=0;k<lenzi;k++){
                    s[i+k]=r[k];
				}
				printf("%s",s);
				break;
			}
		}
	}
         if(p==2){
		printf("%s",s);
	}
	return 0;
}