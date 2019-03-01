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
	double n,r;
	int l,t,i;
	char a[501],b[501];
	t=0;
	scanf("%lf",&n);
	scanf("%s%s",&a,&b);
	l=strlen(a);
	if(l!=strlen(b)){
		printf("error");
		return 0;
	}
	for(i=0;i<l;i++){
		if((a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')||(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G')){
			printf("error");
			return 0;
		}
	}
	for(i=0;i<l;i++){
		if(a[i]==b[i]) t++;
	}
	r=t*1.0/l;
	if(r>n) printf("yes");
	else printf("no");
	return 0;
}