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
	int n,i,j,m=0;
	char s[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
m=0;
		scanf("%s",s);
		for(j=0;s[j];j++){
			if(j==0){
				if(!(s[j]=='_'||(s[j]>='a'&&s[j]<='z')||(s[j]>='A'&&s[j]<='Z'))){
					m++;
				}
			}else{
				if(!(s[j]=='_'||(s[j]>='a'&&s[j]<='z')||(s[j]>='A'&&s[j]<='Z')||(s[j]>='0'&&s[j]<='9'))){
					m++;
				}
			}
		}
		if(m==0){
			printf("yes\n");
		}else{
			printf("no\n");
		}
	}
	return 0;
}