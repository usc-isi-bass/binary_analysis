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
	int n,i,j,l;
char s[52][33];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",s[i]);
	}
	for(i=0;i<n;i++){
		l=strlen(s[i]);
		for(j=l-3;s[i][j]!='\0';j++){
		if((s[i][j]=='i')&&(s[i][j+1]=='n')&&(s[i][j+2]=='g')){
			s[i][j]='\0';
		}
		}
		for(j=l-2;s[i][j]!='\0';j++){
	 if ((s[i][j]=='e')&&(s[i][j+1]=='r')||
				(s[i][j]=='l')&&(s[i][j+1]=='y')){
					s[i][j]='\0';
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%s\n",s[i]);
	}
	return 0;
}