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
	char in[101];
	int i,n,out;
	gets(in);
	n=strlen(in);
	for(i=0;i+1<n;i++){
		out=(int)(in[i])+(int)(in[i+1]);
		printf("%c",out);
	}
	out=(int)(in[n-1])+(int)(in[0]);
	printf("%c",out);
	return 0;
}