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
	int n,judge=0;
	scanf("%d",&n);
	for(int j=0;j<n;j++){
		scanf("%s",zf);
		for(int i=0;zf[i];i++){
			if(!((zf[i]>='0'&&zf[i]<='9'&&i>0)||(zf[i]>='a'&&zf[i]<='z')||(zf[i]>='A'&&zf[i]<='Z')||(zf[i]=='_'))){
			judge=1;
			break;
			}
		}
		if(judge==0){
			printf("yes\n");
		}
		if(judge==1){
			printf("no\n");
		}
		judge=0;
	}
	return 0;
}