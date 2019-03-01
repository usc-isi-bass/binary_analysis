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
	char a[111],b[111];
	char *ap=a,*bp=b;
	gets(a);
	for(unsigned int i=0;i<=strlen(a)-2;i++){
		*(bp+i)=*(ap+i)+*(ap+i+1);
	}
	*(bp+strlen(a)-1)=*(ap+strlen(a)-1)+*(ap);
	*(bp+strlen(a))='\0';
	cout<<b;
	return 0;
}
