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
 * xiaoceyan54.cpp
 *
 *  Created on: 2011-1-8
 *      Author: dyj
 *      ?????????n?????n????
 *      ????????i?j???i??j???0?i,j<n?
 *      ???????0 0????????
 *
 *      ????????????????????????�NOT FOUND�?
 */


int main(){
	int n,i,j,max=0,famous;
	cin>>n;
	int fame[n];
	for(i=0;i<n;i++)
			fame[i]=0;
	while(cin>>i>>j){
		if(i==0&&j==0)
			break;
		fame[j]=fame[j]+1;
	}
	for(j=0;j<n;j++){
		if(fame[j]>=max){
			max=fame[j];
			famous=j;
		}
	}
	if(max>=n-1)
		cout<<famous<<endl;
	else
		cout<<"NOT FOUND"<<endl;
	return 0;
}
