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

/*
 * XIV3.cpp
 *
 *  Created on: 2012-12-9
 *      Author:???
 *      ??????????
 */
int main() {
	int j, i;
	char a[1000][100];//??????????
	for (i = 0; i < 1000; i++) {
		cin >> *(a + i);
		if(getchar()=='\n') break;
	}//????????????
	cout<<*(a);
	for(j=1;j<=i;j++)
		cout<<" "<<*(a+j);//?????????????
}
