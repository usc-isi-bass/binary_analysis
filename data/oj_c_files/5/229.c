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
	int i,m=0;
	float k=0,n;
	char a[502],b[502];
	scanf("%f",&n);
	scanf("%s",a);
	scanf("%s",b);
	for(i=0;i<(strlen(a));i++){
		if(strlen(a)!=strlen(b)){
			m=0;
			break;
		}
		if(a[i]=='A'||a[i]=='T'||a[i]=='C'||a[i]=='G'){
			m++;
			if(a[i]==b[i]){
				k++;
			}
		}else{
			m=0;
			break;
		}
	}
	if(m==0){
		printf("error");
	}else{
	    if((k/(strlen(a)*1.00))>n){
		    printf("yes");
		}else{
		    printf("no");
		}
	}

	return 0;
}

