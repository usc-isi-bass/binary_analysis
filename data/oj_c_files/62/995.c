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


int main() {
	char a[201];
	cin.getline(a,201);
	char *p=NULL;
	p=a;
	for(int i=0;i<=strlen(a);i++){
	if(*(p+i)==' '&&*(p+i+1)==' '){
		for(int j=i;j<=strlen(a)-1;j++)
			*(p+j)=*(p+j+1);
	     i--;
	}
	}
	for(int i=0;a[i]!='\0';i++)
	cout <<*(p+i);
	return 0;
}
