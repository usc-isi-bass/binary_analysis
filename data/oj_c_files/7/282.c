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
	char s[256],sub[256],re[256];
	int t,i,k;
	scanf("%s\n%s\n%s",s,sub,re);
	t=strlen(sub);
	for(i=0;i<strlen(s)-t+1;i++){
		int x=0;
		for(k=i;k<i+t;k++){
			if(s[k]!=sub[k-i]){
				x+=1;
			}
		}
		if(x==0){
			for(k=i;k<i+t;k++){
				s[k]=re[k-i];
			}
		    break;
		}
	}
	printf("%s",s);
	return 0;
}
