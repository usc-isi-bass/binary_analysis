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
 * 105.cpp
 *
 *  Created on: 2011-10-28
 *      Author: think
 */
int main(){
	int rol,col;
	cin>>rol>>col;
	int a[rol][col];
	int i,j;
	for(i=0;i<rol;i++){
		for(j=0;j<col;j++){
			cin>>a[i][j];
		}
	}
	int k;//????
	for(k=0;k<=rol+col-2;k++){
		for(i=0;k-i>=0&&i<rol;i++){
			if(k-i>=col){continue;}
			j=k-i;
			cout<<a[i][j]<<endl;
		}
	}
	return 0;
}
