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
	char a[300],b[300];
	gets(a);
	char *p,*q;
	for(p=a,q=b;*(p+1)!='\0';p++,q++){
		*q=*p+*(p+1);
	}
	*q=*p+a[0];
	*(++q)='\0';
	cout<<b;
}