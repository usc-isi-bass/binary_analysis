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
 * tiqushuzi.cpp
 *
 *  Created on: 2012-12-13
 *      Author: alias
 */
int main(){
	char str[31];
	cin.getline(str,sizeof(str));
	int len = strlen(str);
	for (int i = 0;i < len;i++){
		if (*(str+i) >= '0'&&*(str+i) <= '9')
			cout << *(str+i);
		else{
			if (*(str+i+1) >= '0'&&*(str+i+1) <= '9')
				cout << endl;
			}
	}
	return 0;
}