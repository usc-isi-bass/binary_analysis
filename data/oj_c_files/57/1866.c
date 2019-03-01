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
	int n,a;
	char s[50][50];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",s[i]);
		a=strlen(s[i]);
		if((s[i][a-1]=='r'&&s[i][a-2]=='e')||(s[i][a-1]=='y'&&s[i][a-2]=='l')){
			s[i][a-2]='\0';
		}else{
			s[i][a-3]='\0';
		}
		puts(s[i]);
	}
	return 0;
}