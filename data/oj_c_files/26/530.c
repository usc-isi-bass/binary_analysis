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
	int i;
	char c[101] = { 0 };
	cin.getline(c, 101, '\n');
	for (i = 0; i < strlen(c); i++) {
		if(c[i]!=' ') cout<<c[i];
		else{
		while (c[i]==' ') i++;
		cout<<" "<<c[i];
		}
	}return 0;
}