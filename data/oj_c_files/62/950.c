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
	char str[101][101];
	int n=1;
	char (*p)[101]=NULL;
	while(cin>>str[n])n++;
	for(p=str+1;p<str+n-1;p++){
		cout<<*p<<" ";
	}
	cout<<*p;
	return 0;
}