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
 * ??????????.cpp
 *
 *  Created on: 2012-12-28
 *      Author: i
 */
int a[100][100]={0},n=0,m=0,i=0,j=0;
void bianli(int hang,int lie){
	if(lie==0||hang==n-1)cout<<a[hang][lie]<<endl;
	else{
		cout<<a[hang][lie]<<endl;
		bianli(hang+1,lie-1);
	}
}
int main(){
	cin>>n>>m;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	for(i=0;i<m;i++){
		bianli(0,i);
	}
	for(i=1;i<n;i++){
		bianli(i,m-1);
	}
	return 0;
}