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
 *???????????.cpp
 *?????
 *????: 2012-12-11
 *????????????????
 */


int main(){
	char s1[101], s2[101], *p;			//??????s1[101],s2[101]? ??*p
	int len, i;							//???????len?????i

	cin.getline(s1, 101);				//????????s1??
	len = strlen(s1);					//??????s1??
	//?????s2????
	for (i = 0; i < len - 1; i++)
	{
		s2[i] = s1[i] + s1[i + 1];
	}
	s2[len - 1] = s1[len - 1] + s1[0];

	for (p = s2; p < s2 + len; p++)		//??????s2
		cout << *p;
	return 0;

}