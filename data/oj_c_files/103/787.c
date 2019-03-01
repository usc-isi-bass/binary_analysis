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
 *  Name:homework.cpp
 *  Created on: 2012-12-12
 *  Author: Meng Li
 *  Function:????
 *   */


int main(){                            //???
	char input[1000];
	cin >> input;
	int length=0;
	length=strlen(input);
	int i, count=0, j;
	for (i=0;i<length;i++){
		count=0;
		if (input[i]>=97)
			input[i]=input[i]-32;
		for (j=i;j<length;j++){
			if (input[i]==input[j]||input[j]==input[i]+32){
				count++;
			}
			else
				break;
		}
		cout << '(' << input[i] << ',' << count << ')';
		i=j-1;
	}
	return 0;
}
