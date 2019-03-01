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

char info[1000][1000];
int main() {
	int k=0;
	while(1) {
		cin.getline(info[k],999);
		if (info[k++][0]=='e') break;
	}
	k-=2;
	for (;k>=0;k--) {
		cout<<info[k]<<endl;
	}
	return 0;
}