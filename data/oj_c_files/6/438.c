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
 * jisuanjuzhenbianyuan.cpp
 *
 *  Created on: 2011-1-8
 *      Author: qaj
 */
int main(){
	int num;
	cin>>num;
	for(int z=0;z<num;z++){
		int a,b;
		cin>>a>>b;
		int juzhen[100][100];
		for(int i=0;i<a;i++)
			for(int j=0;j<b;j++)
				cin>>juzhen[i][j];
		int sum=0;
		for(int i=0;i<b;i++)
			sum=sum+juzhen[0][i];
		for(int j=1;j<a-1;j++){
			sum=sum+juzhen[j][0];
			sum=sum+juzhen[j][b-1];
		}
		for(int i=0;i<b;i++)
			sum=sum+juzhen[a-1][i];
		cout<<sum<<endl;
	}
	return 0;

}
