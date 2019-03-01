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
	char s[33];
	int c,i,j,t;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",s);
		c=strlen(s);
		if((s[c-2]=='e'&&s[c-1]=='r')||(s[c-2]=='l'&&s[c-1]=='y')){
			s[c-2]='\0';
		}else{
			s[c-3]='\0';
		}
		printf("%s\n",s);
	}
	return 0;
}