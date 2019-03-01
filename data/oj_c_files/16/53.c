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
	int len;
	char str[6];
	
	cin >> str;
	len = strlen(str);
	for (int i = len - 1; i >= 0; i--)
		cout << str[i];
	
	return 0;
}