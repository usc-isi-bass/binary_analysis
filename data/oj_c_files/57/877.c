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
	char zf[21];
	int l,n,judge=0;
	scanf("%d",&n);
	for(int j=0;j<n;j++){
		scanf("%s",zf);
		l=strlen(zf);
		if(zf[l-1]=='r'){
			zf[l-2]='\0';
		}
		if(zf[l-1]=='y'){
			zf[l-2]='\0';
		}
		if(zf[l-1]=='g'){
			zf[l-3]='\0';
		}
		printf("%s\n",zf);
	}
	return 0;
}