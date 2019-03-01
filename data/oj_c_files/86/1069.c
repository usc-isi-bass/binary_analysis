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

//============================================================================
// Name        : grids.cpp
// Author      : Liang ShiYu
// Version     : 1.0
// Copyright   : Copyright Reserved
// Description : HomeWork
// Date        : 2010-12-17
//============================================================================


int main() {
	int n,data[100][20],answer[100];
	for(int i=0;i<100;i++) answer[i]=60;
	cin>>n;
	for(int i=0;i<n;i++){
		int m;
		cin>>m;
		for(int j=0;j<m;j++) {
			cin>>data[i][j];
			if(data[i][j]<=answer[i]-3) answer[i]-=3;
			else if(data[i][j]>=answer[i]);
			else answer[i]=data[i][j];
		}
	}
	for(int i=0;i<n;i++) cout<<answer[i]<<endl;
	return 0;
}
