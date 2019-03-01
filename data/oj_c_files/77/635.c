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

// ????,remain??????????
// flag????????
void que(char c[100], int remain,
		 char boy, char girl, int flag) 
{
	int i;
	for(; c[flag] != girl; flag++); // ????????????
	for(i = flag; c[i] != boy; i--); // ???????
	c[i] = 0; // ?????0
	c[flag] = 0;
	cout << i << " " << flag << endl; // ??
	remain -= 2;
    if(remain)  // ???????
		que(c, remain, boy, girl, flag);
}

int main()
{
	char c[100];
	char boy, girl;
	int remain;
	cin >> c;
	remain = strlen(c); // ???
	boy = c[0]; // ????????
	girl = c[remain - 1];
	que(c, remain, boy, girl, 0); // ?flag?0?????
	return 0;
}


