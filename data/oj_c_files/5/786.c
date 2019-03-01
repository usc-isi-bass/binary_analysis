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
	double m;
	char a[10000],b[10000];
	scanf("%lf",&m);
	scanf("%s",a);
	scanf("%s",b);
	int l=strlen(a),k=0;
	for(int i=0;i<l;i++){
		if((a[i]=='A'||a[i]=='G'||a[i]=='C'||a[i]=='T')&&(b[i]=='A'||b[i]=='T'||b[i]=='C'||b[i]=='G')){
		    if(a[i]==b[i]){
			   k++;
			}
		}else{
			printf("error");
			return 0;
		}
	}
	double j;
	j=1.0*k/l;
	if(j>m){
		printf("yes");
	}else{
		printf("no");
	}
	return 0;
}
