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
	char s[10000][21];
	int n,i,j;
    int c[10000]={0},d[10000]={0};
    scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",&(s[i]));  
	}
	for(i=0;i<n;i++){
		if(s[i][0]=='_'||(s[i][0]>='a'&&s[i][0]<='z')||(s[i][0]>='A'&&s[i][0]<='Z')){
			d[i]++;
		}
        else{
			c[i]=1;
		}
		for(j=0;s[i][j]!='\0';j++){
			if((s[i][j]>='a'&&s[i][j]<='z')||(s[i][j]>='A'&&s[i][j]<='Z')||(s[i][j]>='0'&&s[i][j]<='9')||s[i][j]=='_'){
				continue;
			}
		    else{
				c[i]=1;
			}
		}
	}
	for(i=0;i<n;i++){
	if(c[i]==0){
			printf("yes\n");
		}
		else{
			printf("no\n");
		}

	}
	return 0;
}

