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
	int n,i;
	char s[1000][260];
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%s",s[i]);
	}
	for(i=1;i<=n;i++){
		int j=0,p;
		p=strlen(s[i]);
        for(j=0;j<p;j++){
		
			if(s[i][j]=='C'){
			s[i][j]='G';
           continue;
			}
            if(s[i][j]=='G'){
				s[i][j]='C';
			continue;
			}
            if(s[i][j]=='A'){
			s[i][j]='T';
			continue;
			}
            if(s[i][j]=='T')
				s[i][j]='A';
		
		}
	}
	for(i=1;i<=n;i++){
		printf("%s\n",s[i]);
	}
	return 0;
}