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
 * Run-lengthEncoding.cpp
 *
 *  Created on: 2012-12-25
 *      Author: Cui Zhaoxiong Class4 1200012931
 */
int main(){
	char input[1005];
	cin >>input;
	char past;
	char zipc[1005];
	int zipi[1005];
	int flag=0;
	int length=strlen(input);
	for (int i=0;i<=length-1;i++){
		if (input[i]>='a') input[i]=input[i]-'a'+'A';
		if (i==0) {
			past=input[0];
			zipc[0]=past;
			zipi[0]=1;
		}else{
			if (past==input[i]){
				zipi[flag]++;
			}else{
				flag++;
				zipc[flag]=input[i];
				zipi[flag]=1;
			}
			past=input[i];
		}
	}
	for (int i=0;i<=flag;i++){
		cout <<'(' <<zipc[i] <<',' <<zipi[i] <<')';
	}
	return 0;
}
