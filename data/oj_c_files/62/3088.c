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
	int l;
	char z[1000];
	gets(z);
	l=strlen(z);
	for (int i=0;i<l;i++){
		if (z[i]!=' ' || (z[i]==' '&&z [i-1]!=' ')) cout<<z[i];
	}
	return 0;
}
