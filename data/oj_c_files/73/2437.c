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
 * SaddlePoint.cpp
 *
 *  Created on: 2012-11-6
 *      Author: Cui Zhaoxiong Class4 1200012931
 */
int main() {
	int a[5][5];//??5*5??a
	for (int i = 0; i < 5; i++) {//?????a
		for (int j = 0; j < 5; j++) {
			cin >> a[i][j];
		}
	}
	int ex[2][5];//??2*5??ex?????????????????????????????????????
	memset(ex,0,sizeof(ex));//?ex??
	for (int i = 0; i < 5; i++) {//??ex????
		for (int j = 0; j < 5; j++) {
			if (a[i][j] > a[i][ex[0][i]])
				ex[0][i] = j;
		}
	}
	for (int i = 0; i < 5; i++) {//???ex????
		for (int j = 0; j < 5; j++) {
			if (a[j][i] < a[ex[1][i]][i])
				ex[1][i] = j;
		}
	}
	/*
	 * ????
	for (int i=0;i<5;i++) cout << ex[0][i]<<' ';
	cout <<endl;
	for (int i=0;i<5;i++) cout << ex[1][i]<<' ';
	*/
	int i=0;//i?????
	for (;i<5;i++){
		if (ex[1][ex[0][i]]==i) {//???i????????????????i??????(i,ex[0][i])????
			cout <<i+1 <<' ' <<ex[0][i]+1 <<' ' <<a[i][ex[0][i]] <<endl;//??
			break;
		}
	}
	if (i==5) cout <<"not found";//?????????????�not found�
	return 0;
}
 