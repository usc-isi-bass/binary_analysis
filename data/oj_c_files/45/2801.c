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
	char a[50],b[50];
	int  i,j,s,w;
	scanf("%s",a);
	s=strlen(a);
	scanf("%s",b);
	w=strlen(b);
	for(j=0;j<w;j++){
		if(b[j]==a[0]){
			for(i=1;i<s;i++){
				if(b[j+i]!=a[i]) break;
			}
			if(i==s) {
				printf("%d",j);
				break;
			}
		}
	}
	return 0;
}