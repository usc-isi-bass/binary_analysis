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

int main()
{   int i,j,k,t;
	char s[50],w[50];
	scanf("%s %s",s,w);
	for(j=0;j<strlen(w)-strlen(s)+1;j++){
		t=1;
		if(w[j]==s[0]){
			for(i=0;i<strlen(s);i++){
				if(w[j+i]!=s[i]){
					t=0;
					break;
				}
			}
			if(t==1){
				printf("%d",j);
				break;
			}
		}
	}
	return 0;
}