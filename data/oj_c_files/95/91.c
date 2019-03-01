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
	char a[80],b[80];
	int t,i;
	char ch;
	gets(a);
	gets(b);
	for(i=0;a[i]!='\0',b[i]!='\0';i++){
		if(a[i]<'Z'&&a[i]>'A')a[i]+=32;
		if(b[i]<'Z'&&b[i]>'A')b[i]+=32;

		t=a[i]-b[i];
		if(t>0){
			ch='>';
			putchar(ch);break;
		}
		if(t<0){
			ch='<';
			putchar(ch);break;
		}
		if(t==0) continue;
		
	
	}
	if(a[i]=='\0'&&b[i]=='\0'){
		ch='=';
		putchar(ch);
	}
	return 0;
}