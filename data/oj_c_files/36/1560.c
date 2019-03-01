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
	char s[100];
	char s1[100];
	int geshu,geshu1;
	int l,l1,i,j,pd=0;
	scanf("%s%s",s,s1);
	l=strlen(s);
	l1=strlen(s1);
	if(l!=l1){
		printf("NO");
	}
	else{
		for(i=0;i<l;i++){
			geshu=0;
			geshu1=0;
			for(j=0;j<l;j++){
				if(s[j]==s[i]){
					geshu++;
				}
				if(s1[j]==s[i]){
					geshu1++;
				}
			}
			if(geshu!=geshu1){
				pd=1;
			}
		}
		if(pd==0){
			printf("YES");
		}
		else{
			printf("NO");
		}
	}
	return 0;
}


