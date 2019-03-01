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
int n,i,j,a,l;
int b=1;
scanf("%d",&n);
char c[21];
for(i=0;i<n;i++){
	b=1;
	scanf("%s",c);
	l=strlen(c);
	for(j=0;j<l;j++){
		if((c[j]=='_')||(c[j]>='A'&&c[j]<='Z')||(c[j]>='a'&&c[j]<='z')||(c[j]>='0'&&c[j]<='9'&&j>0)){
			a=1;
		}
		else{
			b=0;
		}
	}
	if(b==1){
		printf("yes\n");
	}
	else{
		printf("no\n");
	}
}



	return 0;
}