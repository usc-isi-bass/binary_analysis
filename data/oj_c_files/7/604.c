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
	char s[257],ss[257],r[257];
	scanf("%s",s);
	scanf("%s",ss);
	scanf("%s",r);
	char left[257];
	int i,t,k,j;
	int ls=strlen(s);
	int lss=strlen(ss);

	for(i=0;i<ls;i++){
		t=0;
		for(j=0;j<lss;j++){
			if(ss[j]==s[i+j]){
				t++;
			}
		}
		if(t==lss){
			for(k=0;k<ls-i-lss;k++){
				left[k]=s[k+i+t];
			}
			left[k]='\0';
			s[i]='\0';
			break;
		}
	}
	printf("%s",s);
	if(t==lss){
	printf("%s",r);
	printf("%s",left);
	}
	return 0;
}