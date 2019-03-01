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
	int i,n;
	char a[100],b[100],t;
	gets(a);gets(b);
	for(i=0;a[i]!=0&&b[i]!=0;i++){
		if(a[i]>'A'&&a[i]<'Z')
			a[i]=a[i]-'A'+'a';
		if(b[i]>'A'&&b[i]<'Z')
			b[i]=b[i]-'A'+'a';
	}
	n=strcmp(a,b);
	if(n>0)
		t='>';
	else if(n==0)
		t='=';
	else
		t='<';
	printf("%c\n",t);
	return 0;
}
