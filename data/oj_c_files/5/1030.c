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
	double k,j;
	int i,o;
	char a[500],b[500];
	scanf("%lf",&k);
	scanf("%s",&a);
	scanf("%s",&b);
	int l=strlen(a);
	int p=strlen(b);
	o=0;
	for(i=0;i<l;i++){
		if(a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G'){
			p+=500;
		}
		if(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G'){
			p+=500;
		}
		if(a[i]==b[i])
			o++;
	}
	if(l!=p) printf("error");
	else {j=1.0*o/l;
		if(j>k) printf("yes");
		else printf("no");
	}
	return 0;
}