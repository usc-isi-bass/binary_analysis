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
	int i,j,m,n,k,p;
	char s[N][N];
	scanf("%d",&n);
	for(j=0;j<n;j++){
		scanf("%s",s[j]);
	}
	scanf("%d",&m);
	k=1;
	while(k<m){
		for(j=0;j<n;j++){
			for(i=0;i<n;i++){
				if(s[i][j]=='@'){
					if(i>0&&s[i-1][j]=='.'){
						s[i-1][j]='@'+1;
					}
					if(j>0&&s[i][j-1]=='.'){
						s[i][j-1]='@'+1;
					}
					if(i<n-1&&s[i+1][j]=='.'){
						s[i+1][j]='@'+1;
					}
					if(j<n-1&&s[i][j+1]=='.'){
						s[i][j+1]='@'+1;
					}
				}
			}
		}
		k++;
		for(j=0;j<n;j++){
			for(i=0;i<n;i++){
				if(s[i][j]=='@'+1){
					s[i][j]='@';
				}
			}
		}
	}
	p=0;
	for(j=0;j<n;j++){
		for(i=0;i<n;i++){
			if(s[i][j]=='@'){
				p++;
			}	
		}
	}
printf("%d",p);
	return 0;
}
