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
	int n,i,j,s[21];
	char zf[21];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",&zf);
	for(j=0;zf[j];j++){
		if(!((zf[j]=='_')||
			(zf[j]>='a'&&zf[j]<='z')||
			(zf[j]>='A'&&zf[j]<='Z')||
			(zf[j]>='0'&&zf[j]<='9'&&j>0)))
			break;
	}
    printf(zf[j] ? "no\n":"yes\n"); 
	}
 return 0;
}