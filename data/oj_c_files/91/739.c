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

/*??????
 *?????zhizhen6.cpp
 *Created on: 2012-12-11
 *??????????
 */
int main() {
	char cha1[150], cha2[150], *t = NULL;    //?????????
	cin.getline(cha1, 150);                  //????
	t = cha1;
	int i, len;
	len = strlen(cha1);
	for (i = 0; i < len - 1; i++)            //???????
		cha2[i] = *(t + i) + *(t + i + 1);
	cha2[len - 1] = *t + *(t + len - 1);
	for (i=0;i<len;i++)                      //????
	cout << cha2[i];
	return 0;                                //????
}
