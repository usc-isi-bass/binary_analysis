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
	char a[301];
	int c[26];
	int C[26];
	for(int n=0;n<26;n++){
		c[n]=0;
		C[n]=0;
	}
	scanf("%s",a);
	int length;
	length=strlen(a);
	for(int i=0;i<length;i++){
		if(a[i]>='a'&&a[i]<='z'){
			c[a[i]-'a']++;
		}
		if(a[i]>='A'&&a[i]<='Z'){
			C[a[i]-'A']++;
		}
	}
	char x;
	int m=0;
	for(int j=0;j<26;j++){
		if(C[j]!=0){
			if(m==0){
				x=j+'A';
			    printf("%c=%d",x,C[j]);
			}
			else{
				x=j+'A';
			    printf("\n%c=%d",x,C[j]);
			}
			m++;
		}
	}
	for(int k=0;k<26;k++){
		if(c[k]!=0){
			x=k+'a';
			printf("\n%c=%d",x,c[k]);
			m++;
		}
	}
	if(m==0){
		printf("No");
	}
	return 0;
}