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



int main( int argc, char* argv[] ){
	int money = 0;
	int amount = 0;
	int value = 0, i, unit[max] = {0};

	unit[0] = 100;
	unit[1] = 50;
	unit[2] = 20;
	unit[3] = 10;
	unit[4] = 5;
	unit[5] = 1;

	scanf( "%d", &money );
	
	for ( i = 0; i < max; i++ ){
		value = money / unit[i];
		printf( "%d\n", value );
		money = money - value * unit[i];
	}
	
	return 0;
}