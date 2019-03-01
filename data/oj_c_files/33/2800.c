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
int i,p,n,q;
scanf("%d",&n);
for(i=0;i<n;i++){
	char a[256];
	char b[256];
scanf("%s",a);
p=strlen(a);
for(q=0;q<p;q++){
	if(a[q]=='A'){
	b[q]='T';
	}else if(a[q]=='T'){
	b[q]='A';
	}else if(a[q]=='G'){
	b[q]='C';
	}else if(a[q]=='C'){
	b[q]='G';
	}
	}
b[q]='\0';
printf("%s\n",b);
}
return 0;
}