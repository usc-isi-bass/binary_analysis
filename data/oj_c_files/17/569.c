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
 * kuohaopipei.cpp
 * ??????
 *  Created on: 2012-12-4
 *      Author: ???
 */
int main() {
	char str1[101], str2[101];                      //????????
	int i, figure = 0, temp[100];                   //figure??????????
	while (cin >> str1) {                           //?????????
		memset(str2, ' ', sizeof(str2));            //??????????
		for (i = 0; i < strlen(str1); i++) {        //????????????????
			if (str1[i] == '(') {
				str2[i] = '$';                      //??????
				temp[figure++] = i;                 //??????
			}
			if (str1[i] == ')') {                   //????????
				if (figure > 0) {                   //???????????
					str2[temp[figure - 1]] = ' ';   //?????????
					figure--;                       //????????????
				} else {
					str2[i] = '?';                  //?????????
				}
			}
		}
		for (i = 0; i < strlen(str1) - 1; i++)      //???????
			cout << str1[i];
		cout << str1[strlen(str1) - 1] << endl;
		for (i = 0; i < strlen(str1) - 1; i++)      //??????????
			cout << str2[i];
		cout << str2[strlen(str1) - 1] << endl;
		figure = 0;
		memset(str1, ' ', sizeof(str1));            //?????
	}
	return 0;
}
