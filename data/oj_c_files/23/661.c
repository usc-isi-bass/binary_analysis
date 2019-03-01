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

char str[101][101];
int n=1;
int main(){
	while (cin>>str[n]) n++;
	for (n--;n>1;n--) cout<<str[n]<<' ';
	cout<<str[1];
	return 0;
}