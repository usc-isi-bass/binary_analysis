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
	int a[256] , i , n  ;
	char ch;
	a['A']='T';
	a['T']='A';
	a['G']='C';
	a['C']='G';
	scanf("%d\n", &n );

	while(n--){
		ch=getchar();
		while(ch!='\n') {
			putchar(a[ch]);
			ch=getchar();
		}
		putchar('\n');
	}
	return 0;
}
