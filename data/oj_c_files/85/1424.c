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
	char s[21];
	int n,j,i,c=0,l;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",s);
		l=strlen(s);
		for(j=1;j<l;j++){
			if((s[j]=='_')||(s[j]>='a'&&s[j]<='z')||(s[j]>='A'&&s[j]<='Z')||(s[j]>='0'&&s[j]<='9')){
				c++;
			}
		}
		if((s[0]=='_')||(s[0]>='a'&&s[j]<='z')||(s[0]>='A'&&s[j]<='Z')){
			c++;
		}
		if(c==l){
			printf("yes\n");
		}else{
			printf("no\n");
		}
		c=0;
	}
	return 0;
}