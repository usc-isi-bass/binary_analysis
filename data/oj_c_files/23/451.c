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
	char words[MAX][50],m='i';
	int LEN=0;
	while(m!='\n'){
		cin>>words[LEN];
		LEN++;
		cin.get(m);
	}
	for(int i=0;i<LEN-1;i++) cout<<words[LEN-i-1]<<' ';
	cout<<words[0];
	return 0;
}